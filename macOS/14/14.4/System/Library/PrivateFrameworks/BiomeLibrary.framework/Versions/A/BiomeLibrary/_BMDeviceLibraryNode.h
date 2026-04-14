@interface _BMDeviceLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)Display;
+ (id)Power;
+ (id)ScreenLocked;
+ (id)Wireless;
+ (id)Charging;
+ (id)Networking;
+ (id)TimeZone;
+ (id)validKeyPaths;
+ (id)Metadata;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)sublibraries;
+ (id)BootSession;
+ (id)Settings;
+ (id)storeConfigurationForSilentMode;
+ (id)Audio;
+ (id)KeybagLocked;
+ (id)SilentMode;
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
