Pod::Spec.new do |s|
  s.name              = 'ApptalkNinjaSDK'
  s.version           = '0.9.1'

  s.summary           = 'App & Device communication diagnostics'

  s.homepage          = 'http://apptalk.ninja/'

  s.license           = 'Copyright'
  s.author            = { 'Zsolt Bányai' => 'bazso@apptalk.ninja', 'Ádám Soós' => "soos.adam@virgo.hu", 'Miklós Nándori' => 'nandori.miklos@virgo.hu' }

  s.source            = { :git => 'https://github.com/apptalk-ninja/apptalk.ninja-ios.git', :tag => s.version.to_s }


  s.platform          = :ios, '7.0'
  s.source_files      = 'Classes'
  s.requires_arc      = true

  s.frameworks        = 'CoreFoundation', 'SystemConfiguration','CoreData','UIKit'
  s.ios.vendored_frameworks = 'ApptalkNinjaSDK.framework'
  s.libraries         = "z"
  

  s.source_files      = 'ApptalkNinjaSDK.framework/Versions/A/Headers/*.h'

  s.preserve_paths = 'ApptalkNinjaSDK.framework'

end
