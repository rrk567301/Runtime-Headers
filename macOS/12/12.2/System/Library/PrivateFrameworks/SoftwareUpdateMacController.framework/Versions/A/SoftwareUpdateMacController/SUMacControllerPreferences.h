@interface SUMacControllerPreferences : NSObject

+ (id)sharedDefaults;
+ (id)accessControlResponseOverride;
+ (void)logCurrentPreferences;
+ (void)updateDefaultsWithDictionary:(id)a0;
+ (BOOL)forceRosettaUpdates;
+ (BOOL)scanErrorsAsCustomer;
+ (void)configureOverrides:(id)a0;
+ (BOOL)cancelUpdateOnClientDisconnect;
+ (BOOL)allowLiveAssetServerFallback;
+ (BOOL)persistedStateDisabled;
+ (BOOL)purgingDisabled;
+ (id)westgateTokenFilePath;
+ (BOOL)disableFetchingAuthentication;
+ (BOOL)cancelUpdateOnClientDisconnectSpecified;
+ (BOOL)requireRecoveryOSUpdates;
+ (id)defaultsDescription;

@end
