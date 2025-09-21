@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)ScreenLocked;
+ (id)Power;
+ (id)Wireless;
+ (id)Charging;
+ (id)TimeZone;
+ (id)validKeyPaths;
+ (id)Display;
+ (id)BootSession;
+ (id)Metadata;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)Audio;
+ (id)KeybagLocked;
+ (id)SilentMode;
+ (id)Networking;
+ (id)storeConfigurationForSilentMode;
+ (id)Thermals;
+ (id)configurationForBootSession;
+ (id)configurationForKeybagLocked;
+ (id)configurationForMetadata;
+ (id)configurationForScreenLocked;
+ (id)configurationForSilentMode;
+ (id)configurationForTimeZone;
+ (id)storeConfigurationForBootSession;
+ (id)storeConfigurationForKeybagLocked;
+ (id)storeConfigurationForMetadata;
+ (id)storeConfigurationForScreenLocked;
+ (id)storeConfigurationForTimeZone;
+ (id)syncPolicyForBootSession;
+ (id)syncPolicyForKeybagLocked;
+ (id)syncPolicyForMetadata;
+ (id)syncPolicyForScreenLocked;
+ (id)syncPolicyForSilentMode;
+ (id)syncPolicyForTimeZone;

@end
