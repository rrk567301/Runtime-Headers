@interface SUMacControllerPreferences : NSObject

+ (id)sharedDefaults;
+ (char)purgingDisabled;
+ (id)accessControlResponseOverride;
+ (char)cancelUpdateOnClientDisconnect;
+ (char)cancelUpdateOnClientDisconnectSpecified;
+ (void)configureOverrides:(id)a0;
+ (char)convertMinorUpdateToMajor;
+ (id)defaultsDescription;
+ (char)disableFetchingAuthentication;
+ (char)fakeDisableMASuspension;
+ (char)fakeSemiSplatRestartNow;
+ (char)fakeSemiSplatRestartNowSpecified;
+ (char)forceRosettaUpdates;
+ (void)logCurrentPreferences;
+ (char)persistedStateDisabled;
+ (char)requireRecoveryOSUpdates;
+ (char)requireSFRSoftwareUpdates;
+ (char)scanErrorsAsCustomer;
+ (void)updateDefaultsWithDictionary:(id)a0;
+ (id)westgateTokenFilePath;

@end
