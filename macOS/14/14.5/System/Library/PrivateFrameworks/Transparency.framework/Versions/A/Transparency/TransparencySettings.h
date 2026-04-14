@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)devicePlatform;
+ (id)automatedDeviceGroup;
+ (id)deviceUserAgent;
+ (BOOL)enableSelfValidationXPCActivity;
+ (BOOL)allowsInternalSecurityPolicies;
+ (double)backgroundFollowupDelayPeriod;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (double)backgroundNetworkTimeout;
+ (id)cfPrefsJson;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (double)defaultSelfFollowupTicketLifetime;
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
+ (double)queryJustMadeTimeout;
+ (id)transparencyVersionStr;
+ (double)uiBlockingNetworkTimeout;

- (unsigned long long)getEnvironment;
- (BOOL)systemFailureFeatureEnabled;

@end
