@interface TransparencySettings : NSObject

+ (BOOL)isAccountsInQA;
+ (id)getIMEnvironmentName;
+ (unsigned long long)getEnvironment;
+ (BOOL)getBool:(id)a0;
+ (BOOL)allowsInternalSecurityPolicies;
+ (double)defaultNetworkTimeout;
+ (double)uiBlockingNetworkTimeout;
+ (double)backgroundNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (id)deviceUserAgent;
+ (id)getOverride:(id)a0;

@end
