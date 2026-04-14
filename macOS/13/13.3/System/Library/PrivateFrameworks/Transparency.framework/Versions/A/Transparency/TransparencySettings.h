@interface TransparencySettings : NSObject

+ (id)deviceUserAgent;
+ (BOOL)allowsInternalSecurityPolicies;
+ (double)backgroundNetworkTimeout;
+ (double)defaultFollowupTicketLifetime;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (BOOL)getBool:(id)a0;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)a0;
+ (BOOL)isAccountsInQA;
+ (double)uiBlockingNetworkTimeout;

@end
