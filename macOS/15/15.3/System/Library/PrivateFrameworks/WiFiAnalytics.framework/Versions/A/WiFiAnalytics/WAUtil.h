@class NSURL;

@interface WAUtil : NSObject

@property (class, readonly) NSURL *wifianalyticsTmpDirectory;

+ (void)initialize;
+ (id)resourcePath;
+ (id)deviceName;
+ (unsigned long long)getAWDTimestamp;
+ (BOOL)isInternalInstall;
+ (BOOL)isWritingWAMessageToJsonAllowed;
+ (id)_generateInvocationForMethod:(void *)a0;
+ (id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)a0;
+ (void)addDeltaNSNumberForTelemetryKey:(id)a0 dictKey:(id)a1 dictModule:(id)a2 telDict:(id)a3 recentDict:(id)a4 oldDict:(id)a5;
+ (BOOL)canPerformActionWithSamplingPercentage:(unsigned long long)a0;
+ (id)getCopyOfMessage:(id)a0 withNumericalValuesSubstractedByValuesInMessage:(id)a1;
+ (void)getLazyNSNumberPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (void)getLazyNSStringPreference:(id)a0 domain:(id)a1 exists:(id /* block */)a2;
+ (id)getMessageInstanceForKey:(id)a0 andGroupType:(long long)a1;
+ (id)getTokenForIdentifier:(id)a0;
+ (id)getValueForEntitlementForCurrentProcess:(id)a0;
+ (id)groupTypeToString:(long long)a0;
+ (void)incrementValueForKey:(id)a0 inMutableDict:(id)a1 onQueue:(id)a2;
+ (BOOL)isAnalyticsProcessorAllowed;
+ (BOOL)isAnyWiFiAppInstalled;
+ (BOOL)isKeyBagUnlocked;
+ (BOOL)isMacAddress:(id)a0;
+ (BOOL)isPreinstalledWiFiAppVisible;
+ (BOOL)isWiFiAppInstalled;
+ (BOOL)isWiFiFragmentSamplingEnabled;
+ (BOOL)isWildcardMacAddress:(id)a0;
+ (void)logNestedDictionary:(id)a0 indent:(int)a1 prefix:(id)a2;
+ (id)rotateUUIDsForMessage:(id)a0;
+ (BOOL)shouldEnableXPCStore;
+ (BOOL)shouldProcessAnalyticsImmediately;
+ (BOOL)storeToken:(id)a0 withIdentifier:(id)a1;
+ (void)sumNSNumberForKey:(id)a0 dstDict:(id)a1 otherDict:(id)a2;
+ (id)trimTokenForLogging:(id)a0;

@end
