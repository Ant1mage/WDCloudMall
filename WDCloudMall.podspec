#
# Be sure to run `pod lib lint WDCloudMall.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WDCloudMall'
  s.version          = '1.1.0'
  s.summary          = 'A short description of WDCloudMall.'
  s.description      = 'WDCloudMall Pod'
  s.homepage         = 'https://github.com/SugarAlex/WDCloudMall'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zoumin' => 'zoumin@weidian.com' }
  s.source           = { :git => 'https://github.com/SugarAlex/WDCloudMall.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.swift_versions = ['5.3', '5.4', '5.5', '5.6', '5.7', '5.8']

  s.vendored_frameworks = 'WDCloudMall.xcframework'

  s.dependency 'CryptoSwift'
  s.dependency 'Masonry'
	s.dependency 'WechatOpenSDK'
end