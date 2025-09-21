@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)devicePlatform;
+ (id)automatedDeviceGroup;
+ (id)deviceUserAgent;
+ (char)enableSelfValidationXPCActivity;
+ (double)backgroundFollowupDelayPeriod;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (double)backgroundNetworkTimeout;
+ (id)cfPrefsJson;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (double)defaultSelfFollowupTicketLifetime;
+ (double)dismissFailureAfterSeenPeriod;
+ (double)failureIgnorePeriod;
+ (char)getBool:(id)a0;
+ (char)getBool:(id)a0 defaultValue:(char)a1;
+ (unsigned long long)getEnvironment;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)a0;
+ (char)isAccountsInQA;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (double)queryCacheHardTimeout;
+ (double)queryJustMadeTimeout;
+ (id)transparencyVersionStr;
+ (double)uiBlockingNetworkTimeout;

- (id)devicePlatform;
- (id)automatedDeviceGroup;
- (double)atBackgroundFollowupDelayPeriod;
- (char)allowsInternalSecurityPolicies;
- (double)defaultNetworkTimeout;
- (char)getBool:(id)a0;
- (unsigned long long)getEnvironment;
- (id)getOverride:(id)a0;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;
- (id)transparencyVersionStr;
- (double)uiBlockingNetworkTimeout;

@end
