Pod::Spec.new do |spec|
  spec.name             = 'carmenftestpod'
  spec.version          = '0.0.1'
  spec.license          = { :type => 'MIT' }
  spec.homepage         = 'https://github.com/cmknox/swift'
  spec.authors          = { 'Carmen Forsmann' => 'cmforsmann@live.com' }
  spec.summary          = 'Testing Cocoapods for iOS SDK.'
  spec.source           = { :git => 'https://github.com/cmknox/swift.git', :tag => '0.0.1' }
  spec.vendored_frameworks = 'ConnectedDevices.framework'
  spec.requires_arc     = true

end