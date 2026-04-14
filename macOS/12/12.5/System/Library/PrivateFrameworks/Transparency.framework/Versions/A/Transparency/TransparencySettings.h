@class NSDictionary;

@interface TransparencySettings : NSObject

@property (retain) NSDictionary *settings;

+ (BOOL)allowsInternalSecurityPolicies;
+ (BOOL)getBool:(id)a0;
+ (double)defaultNetworkTimeout;
+ (unsigned long long)getEnvironment;
+ (id)deviceUserAgent;
+ (double)defaultQueryCacheTimeout;
+ (id)getIMEnvironmentName;
+ (BOOL)isAccountsInQA;

- (void).cxx_destruct;

@end
