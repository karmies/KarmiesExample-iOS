Pod::Spec.new do |spec|
  spec.name             = 'KarmiesSDK'
  spec.module_name      = 'KarmiesSDK'
  spec.version          = '3.4.0'
  spec.license          = { :text => 'Copyright 2017 Karmies, Inc.', :type => 'Commercial' }
  spec.homepage         = 'https://karmies.com'
  spec.authors          = { 'Karmies' => 'support@karmies.com' }
  spec.summary          = 'Karmies SDK in Swift for iOS and macOS'
  spec.source           = { :git => 'https://github.com/karmies/karmies-sdk-cocoa.git', :tag => spec.version }
  spec.requires_arc     = true

  spec.ios.deployment_target    = '8.0'
  spec.ios.source_files         = ['KarmiesSDK/KarmiesSDK.h', 'KarmiesSDK/Karmies/Common/**/*.{swift,h,m}', 'KarmiesSDK/Karmies/iOS/**/*.{swift,h,m}', 'KarmiesSDK/Vendor/Common/**/*.{swift,h,m}', 'KarmiesSDK/Vendor/iOS/**/*.{swift,h,m}']
  spec.ios.public_header_files  = ['KarmiesSDK/KarmiesSDK.h', 'KarmiesSDK/Karmies/Common/**/*.h', 'KarmiesSDK/Karmies/iOS/**/*.h']
  spec.ios.vendored_libraries   = ['KarmiesSDK/Vendor/iOS/**/*.a']
  spec.ios.frameworks           = ['UIKit', 'CoreData', 'CoreGraphics', 'WebKit']
  spec.ios.pod_target_xcconfig  = { 'OTHER_LDFLAGS' => '-ObjC' }
  spec.ios.user_target_xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

  spec.osx.deployment_target    = '10.11'
  spec.osx.source_files         = ['KarmiesSDK/KarmiesSDK.h', 'KarmiesSDK/Karmies/Common/**/*.{swift,h,m}', 'KarmiesSDK/Karmies/macOS/**/*.{swift,h,m}', 'KarmiesSDK/Vendor/Common/**/*.{swift,h,m}', 'KarmiesSDK/Vendor/macOS/**/*.{swift,h,m}']
  spec.osx.public_header_files  = ['KarmiesSDK/KarmiesSDK.h', 'KarmiesSDK/Karmies/Common/**/*.h}', 'KarmiesSDK/Karmies/macOS/**/*.h}']

  spec.library                  = ['z', 'sqlite3']

  spec.ios.resource_bundle      = { 'KarmiesResources' => ['KarmiesSDK/Karmies/Common/Resources/*.xcassets', 'KarmiesSDK/Karmies/iOS/Resources/*.storyboard'] }

  spec.osx.resource_bundle      = { 'KarmiesResources' => ['KarmiesSDK/Karmies/Common/Resources/*.xcassets'] }
end
