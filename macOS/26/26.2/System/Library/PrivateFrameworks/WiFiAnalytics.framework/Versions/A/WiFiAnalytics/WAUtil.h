@class NSURL;

@interface WAUtil : NSObject

@property (class, readonly) NSURL *wifianalyticsTmpDirectory;

+ (void)initialize;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (BOOL)isWiFiFragmentSamplingEnabled;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (BOOL)isWildcardMacAddress:(id)a0;
+ (long long)countTotalKeysIn:(id)a0;
+ (BOOL)isAnalyticsStoreAllowed;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (BOOL)isMacAddress:(id)a0;
+ (id)customXPCStoreOnProcess;
+ (BOOL)isAnyWiFiAppInstalled;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (id)resourcePath;
+ (id)filterSet:(id)a0 usingPredicate:(id)a1;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (unsigned long long)getAWDTimestamp;
+ (id)customProcessInChargeOfDataProcessingForPolicies;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1 onQueue:(id)a2;
+ (BOOL)canDeleteStore;
+ (id)customMigrationOnProcess;
+ (BOOL)setFutureApfsPurgeableDeadline:(unsigned long long)a0 forURL:(id)a1;
+ (id)customAgeOutTimeIntervalSecs;
+ (void)getLazyNSStringPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (void)addFieldsForChannelFlagLikeKey:(id)a0 inDict:(id)a1;
+ (BOOL)isInternalInstall;
+ (void)setPreference:(id)a0 domain:(id)a1 value:(id)a2;
+ (BOOL)isKeyBagUnlocked;
+ (id)getNumberPreference:(id)a0 domain:(id)a1;
+ (id)deviceName;
+ (BOOL)isPreinstalledWiFiAppVisible;
+ (id)groupTypeToString:(long long)a0;
+ (id)filterArray:(id)a0 usingPredicate:(id)a1;
+ (long long)countTotalKeysInNSObject:(id)a0;
+ (void)getLazyNSNumberPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (BOOL)shouldProcessAnalyticsImmediately;
+ (BOOL)canPerformActionWithSamplingPercentage:(unsigned long long)a0;
+ (BOOL)isWiFiAppInstalled;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (void)addFieldsForAuthFlagsLikeKey:(id)a0 inDict:(id)a1;
+ (id)trimTokenForLogging:(id)a0;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (id)getTokenForIdentifier:(id)a0;

@end
