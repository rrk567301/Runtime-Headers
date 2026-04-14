@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)SilentMode;
+ (id)configurationForSilentMode;
+ (id)Activity;
+ (id)configurationForKeybagLocked;
+ (id)configurationForBootSession;
+ (id)syncPolicyForSilentMode;
+ (id)syncPolicyForTimeZone;
+ (id)syncPolicyForScreenLocked;
+ (id)storeConfigurationForKeybagLocked;
+ (id)Power;
+ (id)storeConfigurationForTimeZone;
+ (id)identifier;
+ (id)sublibraries;
+ (id)syncPolicyForBootSession;
+ (id)ScreenLocked;
+ (id)storeConfigurationForSilentMode;
+ (id)KeybagLocked;
+ (id)validKeyPaths;
+ (id)syncPolicyForMetadata;
+ (id)Charging;
+ (id)configurationForScreenLocked;
+ (id)Networking;
+ (id)streamWithName:(id)a0;
+ (id)Display;
+ (id)Thermals;
+ (id)Wireless;
+ (id)ExternalDisplay;
+ (id)storeConfigurationForScreenLocked;
+ (id)configurationForTimeZone;
+ (id)Audio;
+ (id)configurationForMetadata;
+ (id)syncPolicyForKeybagLocked;
+ (id)TimeZone;
+ (id)storeConfigurationForMetadata;
+ (id)BootSession;
+ (id)Metadata;
+ (id)streamNames;
+ (id)storeConfigurationForBootSession;

@end
