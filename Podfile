platform :ios, '8.0'
use_frameworks!
inhibit_all_warnings!

target 'KarmiesExample' do
    # Karmies SDK and Alamofire forks that add iOS 8 support
    pod 'KarmiesSDK'
    pod 'Alamofire',            git: 'https://github.com/karmies/Alamofire',        branch: 'ios8'
    pod 'AlamofireImage',       git: 'https://github.com/karmies/AlamofireImage',   branch: 'ios8'
end

target 'MessagesExtension' do
    # Karmies SDK and AWS fork that adds app extension spport
    pod 'KarmiesSDK'
    pod 'AWSMobileAnalytics',   git: 'https://github.com/karmies/aws-sdk-ios',      branch: 'app-extension'
end

target 'KarmiesExample_PSMAdKit' do
    # Karmies SDK with PSMAdKit and Alamofire forks that add iOS 8 support
    pod 'KarmiesSDK-PSMAdKit'
    pod 'Alamofire',            git: 'https://github.com/karmies/Alamofire',        branch: 'ios8'
    pod 'AlamofireImage',       git: 'https://github.com/karmies/AlamofireImage',   branch: 'ios8'
end
