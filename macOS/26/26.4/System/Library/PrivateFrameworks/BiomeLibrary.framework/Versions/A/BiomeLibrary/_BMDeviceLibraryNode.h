@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)Wireless;
+ (id)SilentMode;
+ (id)Thermals;
+ (id)Activity;
+ (id)syncPolicyForSilentMode;
+ (id)Networking;
+ (id)Audio;
+ (id)Display;
+ (id)ExternalDisplay;
+ (id)syncPolicyForMetadata;
+ (id)configurationForMetadata;
+ (id)storeConfigurationForKeybagLocked;
+ (id)storeConfigurationForMetadata;
+ (id)configurationForBootSession;
+ (id)syncPolicyForBootSession;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)syncPolicyForKeybagLocked;
+ (id)BootSession;
+ (id)configurationForTimeZone;
+ (id)configurationForKeybagLocked;
+ (id)Charging;
+ (id)configurationForScreenLocked;
+ (id)storeConfigurationForBootSession;
+ (id)Power;
+ (id)configurationForSilentMode;
+ (id)TimeZone;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)storeConfigurationForTimeZone;
+ (id)syncPolicyForTimeZone;
+ (id)identifier;
+ (id)ScreenLocked;
+ (id)KeybagLocked;
+ (id)syncPolicyForScreenLocked;
+ (id)Metadata;
+ (id)storeConfigurationForScreenLocked;
+ (id)storeConfigurationForSilentMode;

@end
