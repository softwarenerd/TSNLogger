Pod::Spec.new do |spec|
  spec.name             = 'TSNLogger'
  spec.version          = '1.0'
  spec.license          = { :type => 'MIT' }
  spec.homepage         = 'https://github.com/softwarenerd/TSNLogger'
  spec.author           = { 'Brian Lambert' => 'brianlambert@softwarenerd.org' }
  spec.summary          = 'iOS logging utility.'
  spec.source           = { :git => 'https://github.com/softwarenerd/TSNLogger.git', :tag => 'v1.0' }
  spec.source_files     = 'Source/*'
  spec.platform         = :ios
  spec.framework        = 'UIKit'
  spec.requires_arc     = true
end