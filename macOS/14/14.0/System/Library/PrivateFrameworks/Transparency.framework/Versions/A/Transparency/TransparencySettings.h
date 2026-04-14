@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)automatedDeviceGroup;
+ (id)deviceUserAgent;
+ (BOOL)allowsInternalSecurityPolicies;
+ (double)backgroundNetworkTimeout;
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
+ (double)queryCacheHardTimeout;
+ (double)uiBlockingNetworkTimeout;

- (unsigned long long)getEnvironment;

@end
