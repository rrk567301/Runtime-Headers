@class NSURL;

@interface WAUtil : NSObject

@property (class, readonly) NSURL *wifianalyticsTmpDirectory;

+ (long long)countTotalKeysIn:(id)a0;
+ (BOOL)isWiFiAppInstalled;
+ (id)deviceName;
+ (void)addFieldsForAuthFlagsLikeKey:(id)a0 inDict:(id)a1;
+ (BOOL)setFutureApfsPurgeableDeadline:(unsigned long long)a0 forURL:(id)a1;
+ (BOOL)isKeyBagUnlocked;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (BOOL)isMacAddress:(id)a0;
+ (id)customMigrationOnProcess;
+ (BOOL)canPerformActionWithSamplingPercentage:(unsigned long long)a0;
+ (BOOL)isWiFiFragmentSamplingEnabled;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (void)addFieldsForChannelFlagLikeKey:(id)a0 inDict:(id)a1;
+ (id)customAgeOutTimeIntervalSecs;
+ (void)initialize;
+ (id)trimTokenForLogging:(id)a0;
+ (void)getLazyNSNumberPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (unsigned long long)getAWDTimestamp;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)filterSet:(id)a0 usingPredicate:(id)a1;
+ (id)customXPCStoreOnProcess;
+ (BOOL)isInternalInstall;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (BOOL)isPreinstalledWiFiAppVisible;
+ (BOOL)canDeleteStore;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)getTokenForIdentifier:(id)a0;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1 onQueue:(id)a2;
+ (long long)countTotalKeysInNSObject:(id)a0;
+ (id)filterArray:(id)a0 usingPredicate:(id)a1;
+ (BOOL)isAnalyticsStoreAllowed;
+ (BOOL)isAnyWiFiAppInstalled;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (BOOL)shouldProcessAnalyticsImmediately;
+ (void)getLazyNSStringPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (id)getNumberPreference:(id)a0 domain:(id)a1;
+ (void)setPreference:(id)a0 domain:(id)a1 value:(id)a2;
+ (id)customProcessInChargeOfDataProcessingForPolicies;
+ (BOOL)isWildcardMacAddress:(id)a0;
+ (id)resourcePath;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)groupTypeToString:(long long)a0;

@end
