Pod::Spec.new do |s|
  s.name     = 'ViewChangeFramework'
  s.version  = '0.0.1'
  s.ios.deployment_target = '8.1'
  s.license  =  { :type => 'MIT', :file => 'LICENSE' }
  s.summary  = 'Tool which can changeview when you click the button'
  s.homepage = 'https://github.com/bashe21/ViewChangeFramework'
  s.authors   = { '跋涉'=>'3064662835@qq.com' }
  s.source   = { :git => 'https://github.com/bashe21/ViewChangeFramework.git', :tag => s.version.to_s }

  s.description = 'a smart tool.you can use it to change youre view when you click the button that you has custom'

  s.vendored_frameworks = 'ViewChangeFramework/*.{framework}'
  s.frameworks   = 'UIKit','Foundation'
  s.requires_arc = true
end
