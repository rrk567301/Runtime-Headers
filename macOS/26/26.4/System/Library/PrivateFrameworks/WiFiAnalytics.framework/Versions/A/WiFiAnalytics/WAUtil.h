@class NSURL;

@interface WAUtil : NSObject

@property (class, readonly) NSURL *wifianalyticsTmpDirectory;

+ (BOOL)isKeyBagUnlocked;
+ (void)initialize;
+ (void)getLazyNSStringPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (BOOL)isInternalInstall;
+ (id)getWeekStartForDate:(id)a0;
+ (id)resourcePath;
+ (id)deviceName;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)filterSet:(id)a0 usingPredicate:(id)a1;
+ (id)defaultKeysAllowedOnCustomerInstalls;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)getNumberPreference:(id)a0 domain:(id)a1;
+ (void)addFieldsForAuthFlagsLikeKey:(id)a0 inDict:(id)a1;
+ (BOOL)isAnalyticsStoreAllowed;
+ (void)addFieldsForChannelFlagLikeKey:(id)a0 inDict:(id)a1;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)customProcessInChargeOfDataProcessingForPolicies;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)trimTokenForLogging:(id)a0;
+ (id)groupTypeToString:(long long)a0;
+ (BOOL)setFutureApfsPurgeableDeadline:(unsigned long long)a0 forURL:(id)a1;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)filterArrayForDottedKeyPaths:(id)a0;
+ (id)customXPCStoreOnProcess;
+ (void)getLazyNSNumberPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1 onQueue:(id)a2;
+ (BOOL)isWiFiFragmentSamplingEnabled;
+ (void)setPreference:(id)a0 domain:(id)a1 value:(id)a2;
+ (BOOL)isWiFiAppInstalled;
+ (BOOL)shouldProcessAnalyticsImmediately;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (BOOL)isPreinstalledWiFiAppVisible;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (BOOL)canPerformActionWithSamplingPercentage:(unsigned long long)a0;
+ (id)filterArray:(id)a0 usingPredicate:(id)a1;
+ (BOOL)isAnyWiFiAppInstalled;
+ (long long)countTotalKeysInNSObject:(id)a0;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (id)customAgeOutTimeIntervalSecs;
+ (id)customMigrationOnProcess;
+ (id)filterArrayForKeys:(id)a0;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (id)enableCoreDataConcurrencyDebug;
+ (BOOL)canDeleteStore;
+ (long long)countTotalKeysIn:(id)a0;
+ (BOOL)isMacAddress:(id)a0;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (unsigned long long)getAWDTimestamp;
+ (BOOL)isWildcardMacAddress:(id)a0;

@end
