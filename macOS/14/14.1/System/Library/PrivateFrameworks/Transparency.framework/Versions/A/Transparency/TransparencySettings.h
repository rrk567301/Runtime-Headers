@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)devicePlatform;
+ (id)automatedDeviceGroup;
+ (id)deviceUserAgent;
+ (BOOL)allowsInternalSecurityPolicies;
+ (double)backgroundNetworkTimeout;
+ (id)cfPrefsJson;
+ (double)defaultFollowupTicketLifetime;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (double)dismissFailureAfterSeenPeriod;
+ (double)failureIgnorePeriod;
+ (BOOL)getBool:(id)a0;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)a0;
+ (BOOL)isAccountsInQA;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (double)queryCacheHardTimeout;
+ (id)transparencyVersionStr;
+ (double)uiBlockingNetworkTimeout;

- (unsigned long long)getEnvironment;

@end
