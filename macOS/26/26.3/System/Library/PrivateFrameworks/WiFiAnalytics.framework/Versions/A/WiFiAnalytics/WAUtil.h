@class NSURL;

@interface WAUtil : NSObject

@property (class, readonly) NSURL *wifianalyticsTmpDirectory;

+ (BOOL)isInternalInstall;
+ (BOOL)isMacAddress:(id)a0;
+ (void)initialize;
+ (id)customMigrationOnProcess;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (BOOL)isKeyBagUnlocked;
+ (BOOL)canDeleteStore;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (id)deviceName;
+ (id)filterSet:(id)a0 usingPredicate:(id)a1;
+ (BOOL)canPerformActionWithSamplingPercentage:(unsigned long long)a0;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (void)setPreference:(id)a0 domain:(id)a1 value:(id)a2;
+ (id)trimTokenForLogging:(id)a0;
+ (void)addFieldsForChannelFlagLikeKey:(id)a0 inDict:(id)a1;
+ (id)customXPCStoreOnProcess;
+ (id)resourcePath;
+ (BOOL)isWildcardMacAddress:(id)a0;
+ (id)getNumberPreference:(id)a0 domain:(id)a1;
+ (id)customProcessInChargeOfDataProcessingForPolicies;
+ (long long)countTotalKeysInNSObject:(id)a0;
+ (long long)countTotalKeysIn:(id)a0;
+ (BOOL)isPreinstalledWiFiAppVisible;
+ (id)customAgeOutTimeIntervalSecs;
+ (BOOL)isAnyWiFiAppInstalled;
+ (void)addFieldsForAuthFlagsLikeKey:(id)a0 inDict:(id)a1;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (BOOL)setFutureApfsPurgeableDeadline:(unsigned long long)a0 forURL:(id)a1;
+ (BOOL)isAnalyticsStoreAllowed;
+ (id)filterArray:(id)a0 usingPredicate:(id)a1;
+ (id)getTokenForIdentifier:(id)a0;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1 onQueue:(id)a2;
+ (unsigned long long)getAWDTimestamp;
+ (BOOL)shouldProcessAnalyticsImmediately;
+ (BOOL)isWiFiAppInstalled;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (void)getLazyNSNumberPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (BOOL)isWiFiFragmentSamplingEnabled;
+ (id)groupTypeToString:(long long)a0;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (void)getLazyNSStringPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;

@end
