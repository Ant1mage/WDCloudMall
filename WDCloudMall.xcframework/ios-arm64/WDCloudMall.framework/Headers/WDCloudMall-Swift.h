#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.120.1 clang-1400.0.28.1)
#ifndef WDCLOUDMALL_SWIFT_H
#define WDCLOUDMALL_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="WDCloudMall",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UIColor;
@class NSString;
@class NSAttributedString;
@class UIFont;
@class NSCoder;
@class UITouch;
@class UIEvent;

IB_DESIGNABLE
SWIFT_CLASS("_TtC11WDCloudMall11ActiveLabel")
@interface ActiveLabel : UILabel
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull mentionColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable mentionSelectedColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull hashtagColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable hashtagSelectedColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull URLColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nullable URLSelectedColor;
@property (nonatomic) IBInspectable CGFloat lineSpacing;
@property (nonatomic) IBInspectable CGFloat minimumLineHeight;
@property (nonatomic, copy) IBInspectable NSString * _Nullable highlightFontName;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSLineBreakMode lineBreakMode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)awakeFromNib;
- (void)drawTextInRect:(CGRect)rect;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesCancelled:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end

@class UIGestureRecognizer;

@interface ActiveLabel (SWIFT_EXTENSION(WDCloudMall)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end



















@class WDCloudMallContainer;

SWIFT_PROTOCOL("_TtP11WDCloudMall21WDCMContainerDelegate_")
@protocol WDCMContainerDelegate
- (void)wdcmContainerWillStartLoad:(WDCloudMallContainer * _Nonnull)view;
- (void)wdcmContainerDidStartLoad:(WDCloudMallContainer * _Nonnull)view;
- (void)wdcmContainerDidFinishLoad:(WDCloudMallContainer * _Nonnull)view;
- (void)wdcmContainerDidFailLoadWithError:(WDCloudMallContainer * _Nonnull)view error:(NSError * _Nonnull)error;
- (void)wdcmContainerUpdateTitle:(WDCloudMallContainer * _Nonnull)view title:(NSString * _Nonnull)title;
@end

@class NSURL;

SWIFT_PROTOCOL("_TtP11WDCloudMall18WDCMNoticeDelegate_")
@protocol WDCMNoticeDelegate <NSObject>
- (void)wdcmNoticeLogin:(WDCloudMallContainer * _Nonnull)view;
- (void)wdcmNoticeLogout:(WDCloudMallContainer * _Nonnull)view;
- (void)wdcmNoticeShare:(WDCloudMallContainer * _Nonnull)view parameters:(NSDictionary<NSString *, id> * _Nullable)parameters;
- (void)wdcmNoticeOpenURL:(NSURL * _Nonnull)url;
@end


SWIFT_CLASS("_TtC11WDCloudMall12WDCMResponse")
@interface WDCMResponse : NSObject
@property (nonatomic) NSInteger code;
@property (nonatomic, copy) NSString * _Nonnull message;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nonnull data;
- (NSString * _Nonnull)toString SWIFT_WARN_UNUSED_RESULT;
- (NSDictionary<NSString *, id> * _Nonnull)toMap SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11WDCloudMall11WDCloudMall")
@interface WDCloudMall : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) WDCloudMall * _Nonnull shared;)
+ (WDCloudMall * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, weak) id <WDCMNoticeDelegate> _Nullable notice;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class WDCloudMallUserModel;

@interface WDCloudMall (SWIFT_EXTENSION(WDCloudMall))
- (void)loginWithUser:(WDCloudMallUserModel * _Nonnull)user complete:(void (^ _Nonnull)(WDCMResponse * _Nonnull))complete;
- (void)logoutWithUser:(WDCloudMallUserModel * _Nonnull)user complete:(void (^ _Nonnull)(WDCMResponse * _Nonnull))complete;
@end

@class WDCloudMallConfig;

@interface WDCloudMall (SWIFT_EXTENSION(WDCloudMall))
- (void)registerWithConfig:(WDCloudMallConfig * _Nonnull)config;
- (WDCloudMallContainer * _Nonnull)createContainer SWIFT_WARN_UNUSED_RESULT;
@end

@class WDCloudMallWXConfig;

SWIFT_CLASS("_TtC11WDCloudMall17WDCloudMallConfig")
@interface WDCloudMallConfig : NSObject
- (nonnull instancetype)initWithAppKey:(NSString * _Nonnull)appKey wxConfig:(WDCloudMallWXConfig * _Nonnull)wxConfig OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithAppKey:(NSString * _Nonnull)appKey OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC11WDCloudMall20WDCloudMallContainer")
@interface WDCloudMallContainer : UIView
@property (nonatomic, weak) id <WDCMContainerDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end






SWIFT_PROTOCOL("_TtP11WDCloudMall26WDCloudMallWebViewSettings_")
@protocol WDCloudMallWebViewSettings
@property (nonatomic, readonly, copy) NSURL * _Nullable url;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoForward;
@property (nonatomic, readonly) BOOL loading;
@property (nonatomic, copy) NSString * _Nonnull title;
- (void)goBack;
- (void)goForward;
- (void)stopLoading;
- (void)loadRequestWithUrl:(NSString * _Nonnull)url;
- (void)loadUrlWithFastAuthWithUserId:(NSString * _Nonnull)userId targetUrl:(NSString * _Nonnull)targetUrl loadingUrl:(NSString * _Nullable)loadingUrl complete:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))complete;
- (void)reload;
- (void)callJSWithData:(NSDictionary<NSString *, id> * _Nonnull)data complete:(void (^ _Nonnull)(NSDictionary * _Nullable, NSError * _Nullable))complete;
@end


@interface WDCloudMallContainer (SWIFT_EXTENSION(WDCloudMall)) <WDCloudMallWebViewSettings>
@property (nonatomic, readonly, copy) NSURL * _Nullable url;
@property (nonatomic, readonly) BOOL canGoBack;
@property (nonatomic, readonly) BOOL canGoForward;
@property (nonatomic, readonly) BOOL loading;
@property (nonatomic, copy) NSString * _Nonnull title;
- (void)goBack;
- (void)goForward;
- (void)stopLoading;
- (void)loadRequestWithUrl:(NSString * _Nonnull)url;
- (void)loadUrlWithFastAuthWithUserId:(NSString * _Nonnull)userId targetUrl:(NSString * _Nonnull)targetUrl loadingUrl:(NSString * _Nullable)loadingUrl complete:(void (^ _Nonnull)(BOOL, NSString * _Nonnull))complete;
- (void)reload;
- (void)callJSWithData:(NSDictionary<NSString *, id> * _Nonnull)data complete:(void (^ _Nonnull)(NSDictionary * _Nullable, NSError * _Nullable))complete;
@end


SWIFT_CLASS("_TtC11WDCloudMall20WDCloudMallUserModel")
@interface WDCloudMallUserModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull userId;
- (nonnull instancetype)initWithUserId:(NSString * _Nonnull)userId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11WDCloudMall19WDCloudMallWXConfig")
@interface WDCloudMallWXConfig : NSObject
- (nonnull instancetype)initWithAppId:(NSString * _Nonnull)appId universalLink:(NSString * _Nonnull)universalLink OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
