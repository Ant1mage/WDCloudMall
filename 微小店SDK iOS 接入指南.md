# 微小店SDK iOS 接入指南

## 一. 简述

微小店SDK提供App内的开店能力, 整个电商交易都可以嵌入, 实现静默登录, 静默支付等功能

iOS端 SDK 采用 Swift 语言编写, 相比于 Objective-C 拥有更快的启动速度和健壮的安全性

&nbsp;

## 1.0.5版本更新

1. **WechatOpenSDK** 升级为 **1.9.6.2**
2. **WDCloudMallConfig** 增加 **func loadUrlWithFastAuth(userId: String, targetUrl: String, loadingUrl: String?, complete: @escaping (Bool, String) -> Void)** 方法, 用于 webView直接登录和快速鉴权
3. **iOS16支持**

```\
    /*
    **  userId: 用户id
    **  targetUrl: 目标地址
    **  loadingUrl: 加载时的目标地址
    **  complete: bool -> 登录和快速鉴权回调, string -> 返回的message
    */

    func loadUrlWithFastAuth(userId: String, targetUrl: String, loadingUrl: String?, complete: @escaping (Bool, String) -> Void) {
        // 流程为: 
        // 1. 先加载 loadingUrl(如果有的话)
        // 2. SDK 内部处理登录和鉴权
        // 3. 回调 SDK 内部处理结果
        // 4. 加载 targetUrl

        // 注意: 回调为 true 时不需要关心 message, 如果为 false 的话可查看 message 并自行处理后续业务逻辑
    }
```

## 1.0.3版本更新

1. **WDCMUserModel** 更新为 **WDCloudMallUserModel**
2. **WDCloudMallConfig** 增加 **(WDCloudMallWXConfig) wxConfig** 参数, 用于开启和关闭微信支付权限, 如不需要微信直接传入 **nil** 即可

```
wxConfig需要传入 wx 的 appid 和 universalLink 
#warning - 因为 framework 结构与 接入 App 环境隔离, 所以必传这两个参数, 否则无法跳转微信支付

WDCloudMallWXConfig *wxConfig = [[WDCloudMallWXConfig alloc] initWithAppId:@"xxxx" universalLink:@"xxxx"];
WDCloudMallConfig *config = [[WDCloudMallConfig alloc] initWithAppKey:@"xxx" wxConfig:wxConfig];
```

另需配置微信 sdk 需要的参数, 请看: <https://developers.weixin.qq.com/doc/oplatform/Mobile_App/Access_Guide/iOS.html>

&nbsp;

## 二. 接入

### 1. SDK集成

#### 1.1 接入要求

1. iOS 11.0及以上版本
2. XCode 11.0及以上版本 (建议使用最新版本)

#### 1.2 通过 CocoaPods 安装

 pod update 拉取最新版本

```
  pod 'WDCloudMall'
```

#### 1.3 配置`Info.plist`权限

1. 设置 Photo Privacy (用户可能需要用户选择图片或选择图片)
2. 允许网络权限

&nbsp;

### 2. 初始化

初始化前需要在[微店开放平台](https://open.weidian.com/)申请`appKey`
然后在适当的位置初始化SDK (**请确保在加载视图前 SDK 已经注册**)

示例代码如下:

```Objective-C
// 初始化config
WDCloudMallConfig *config = [[WDCloudMallConfig alloc] initWithAppKey:@"xxx"];

// 注册sdk
[[WDCloudMall shared] registerWithConfig:config];
```

&nbsp;

## 三. 视图加载

1. 将 WDCloudMallContainer(继承自UIView) 添加至相应的位置
2. 使用 containerView 加载url

示例代码如下:

```Objective-C
WDCloudMallContainer *containerView = [WDCloudMall shared] createContainer];
[self.view addSubView: containerView];

NSString *url = @"xxx";
[containerView loadRequestWithUrl:url];
```

&nbsp;

## 四. 其他

### 1. WDCloudMallNotice

JS call Native 方法回调, 需手动实现.

1. noticeDelegate 基本为统一对外出口方法, 建议统一处理(登录, 登出等方法基本走的是一套, 很少会区分)

2. 手动实现自己要执行的逻辑

示例代码如下:

```Objective-C
[WDCloudMall shared].notice = self;
```

```Objective-C
#pragma mark - WDCMNoticeDelegate

/* 
 *  登录
 *  @param user - 具体查看 WDCMUserModel 
**/

- (void)wdcmNoticeLogin:(WDCloudMallContainer *)container {
 
    // login 方法可单独使用
    [[WDCloudMall shared] loginWithUser:self.user complete:^(WDCMResponse * resp) {
    
        // do something
        
    }];
}


/* 
 *  登出
 *  @param user - 具体查看 WDCMUserModel 
**/

- (void)wdcmNoticeLogout:(WDCloudMallContainer *)container {
    
    // logout 方法可单独使用
    [[WDCloudMall shared] logoutWithUser:self.user complete:^(WDCMResponse * resp) {
    
        // do something
        
    }];
}


/* 
 *  分享
**/

- (void)wdcmNoticeShare:(WDCloudMallContainer *)container parameters:(NSDictionary<NSString *, id> *)parameters {
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:parameters options:0 error:0];
    NSString *dataStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    
    // 伪代码弹窗
    [showAlert string: dataStr];
}


/* 
 *  打开 url - 比如调起微信或支付宝等
**/

- (void)wdcmNoticeOpenURL:(NSURL *)url {
    
    // 调起支付或其他
    [[UIApplication sharedApplication] openURL:url options:@{} completionHandler:nil];
}

```

&nbsp;

### 2. WDCMContainerDelegate

加载 url 的回调, 示例代码如下:

```Objective-C
containerView.delegate = self;
```

```Swift
#pragma mark - WDCMContainerDelegate

// 准备开始加载
func wdcmContainerWillStartLoad(_ view: WDCloudMallContainer)

// 已经开始加载
func wdcmContainerDidStartLoad(_ view: WDCloudMallContainer)

// 结束加载
func wdcmContainerDidFinishLoad(_ view: WDCloudMallContainer)

// 加载出错
func wdcmContainerDidFailLoadWithError(_ view: WDCloudMallContainer, error: Error)

// title 变更
func wdcmContainerUpdateTitle(_ view: WDCloudMallContainer, title: String)

```

&nbsp;

### 3. WDCloudMallContainer的一些方法和属性

```Swift
var url: URL? { get }
var canGoBack: Bool { get }
var canGoForward: Bool { get }
var loading: Bool { get }
var title: String { get set }
    
func goBack()
func goForward()
func stopLoading()
func loadRequest(url: String)
func loadUrlWithFastAuth(userId: String, targetUrl: String, loadingUrl: String?, complete: @escaping (Bool, String) -> Void)
func reload()
func callJS(data: [String: Any], complete: @escaping ([AnyHashable: Any]?, Error?) -> Void)
```

&nbsp;

### 4. WDCloudMall的一些方法和属性

```Swift
// config
var config: WDCloudMallConfig?

// notice delegate
weak var notice: WDCMNoticeDelegate?

// 注册 config
func register(config: WDCloudMallConfig)

// 创建一个 container
func createContainer() -> WDCloudMallContainer

// sdk 登录
func login(user: WDCMUserModel, complete: @escaping (WDCMResponse) -> ())

// sdk 登出
func logout(user: WDCMUserModel, complete: @escaping (WDCMResponse) -> ())
```

&nbsp;
