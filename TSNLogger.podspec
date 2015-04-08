Pod::Spec.new do |spec|
  spec.name             = 'TSNLogger'
  spec.version          = '1.2.6'
  spec.license          = { :type => 'MIT' }
  spec.homepage         = 'https://github.com/softwarenerd/TSNLogger'
  spec.author           = { 'Brian Lambert' => 'brianlambert@softwarenerd.org' }
  spec.summary          = 'iOS logging utility.'
  spec.source           = { :git => 'https://github.com/softwarenerd/TSNLogger.git', :tag => 'v1.2.6' }
  spec.source_files     = 'Source/*'
  spec.platform         = :ios, '7.0'
  spec.framework        = 'UIKit'
  spec.requires_arc     = true
end