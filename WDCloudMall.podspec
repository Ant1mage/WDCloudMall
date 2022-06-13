#
# Be sure to run `pod lib lint WDCloudMall.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WDCloudMall'
  s.version          = '1.0.3'
  s.summary          = 'A short description of WDCloudMall.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'WDCloudMall Pod'

  s.homepage         = 'https://github.com/SugarAlex/WDCloudMall'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zoumin' => 'zoumin@weidian.com' }
  s.source           = { :git => 'https://github.com/SugarAlex/WDCloudMall.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  # s.source_files = 'WDCloudMall/Classes/**/*'

  s.xcconfig = { 'EXCLUDED_ARCHS' => 'armv7' }
  # s.attributes_hash['extended'] ||= {'cocoapods-binary-source-swithcer' => '~> 1.0.0', "is_xcframework" => "true"}
  
  # s.resource_bundles = {
  #   'WDCloudMall' => ['WDCloudMall/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.vendored_frameworks = 'WDCloudMall.xcframework'
  s.dependency 'CryptoSwift', '~> 1.4.2'
  s.dependency 'SnapKit', '~> 5.0.1'
  s.dependency 'WechatOpenSDK', '~> 1.8.7.1'
end
