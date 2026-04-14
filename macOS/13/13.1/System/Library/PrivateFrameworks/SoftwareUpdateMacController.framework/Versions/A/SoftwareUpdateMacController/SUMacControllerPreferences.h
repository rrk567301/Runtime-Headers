@interface SUMacControllerPreferences : NSObject

+ (id)sharedDefaults;
+ (BOOL)fakeSemiSplatRestartNow;
+ (BOOL)cancelUpdateOnClientDisconnect;
+ (void)updateDefaultsWithDictionary:(id)a0;
+ (BOOL)persistedStateDisabled;
+ (BOOL)purgingDisabled;
+ (BOOL)forceRosettaUpdates;
+ (id)westgateTokenFilePath;
+ (BOOL)disableFetchingAuthentication;
+ (BOOL)cancelUpdateOnClientDisconnectSpecified;
+ (id)accessControlResponseOverride;
+ (BOOL)scanErrorsAsCustomer;
+ (BOOL)requireSFRSoftwareUpdates;
+ (BOOL)requireRecoveryOSUpdates;
+ (BOOL)convertMinorUpdateToMajor;
+ (BOOL)fakeSemiSplatRestartNowSpecified;
+ (void)configureOverrides:(id)a0;
+ (void)logCurrentPreferences;
+ (id)defaultsDescription;

@end
