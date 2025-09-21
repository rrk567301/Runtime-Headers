@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)Audio;
+ (id)configurationForScreenLocked;
+ (id)configurationForBootSession;
+ (id)identifier;
+ (id)configurationForSilentMode;
+ (id)Networking;
+ (id)syncPolicyForTimeZone;
+ (id)storeConfigurationForScreenLocked;
+ (id)configurationForTimeZone;
+ (id)syncPolicyForScreenLocked;
+ (id)Wireless;
+ (id)sublibraries;
+ (id)ExternalDisplay;
+ (id)syncPolicyForMetadata;
+ (id)BootSession;
+ (id)syncPolicyForSilentMode;
+ (id)Thermals;
+ (id)KeybagLocked;
+ (id)configurationForKeybagLocked;
+ (id)Activity;
+ (id)storeConfigurationForKeybagLocked;
+ (id)storeConfigurationForSilentMode;
+ (id)TimeZone;
+ (id)syncPolicyForKeybagLocked;
+ (id)storeConfigurationForMetadata;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)Display;
+ (id)configurationForMetadata;
+ (id)Metadata;
+ (id)Charging;
+ (id)syncPolicyForBootSession;
+ (id)Power;
+ (id)validKeyPaths;
+ (id)storeConfigurationForTimeZone;
+ (id)SilentMode;
+ (id)storeConfigurationForBootSession;
+ (id)ScreenLocked;

@end
