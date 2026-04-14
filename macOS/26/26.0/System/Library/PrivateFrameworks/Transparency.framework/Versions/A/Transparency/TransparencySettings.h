@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)automatedDeviceGroup;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (id)transparencyVersionStr;
+ (double)defaultQueryCacheTimeout;
+ (BOOL)enableSelfValidationXPCActivity;
+ (id)getIMEnvironmentName;
+ (id)getOverride:(id)a0;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (BOOL)isAccountsInQA;
+ (unsigned long long)getEnvironment;
+ (id)cfPrefsJson;
+ (double)dismissFailureAfterSeenPeriod;
+ (BOOL)getBool:(id)a0;
+ (double)queryJustMadeTimeout;
+ (id)devicePlatform;
+ (double)defaultSelfFollowupTicketLifetime;
+ (id)deviceUserAgent;
+ (double)backgroundFollowupDelayPeriod;
+ (double)failureIgnorePeriod;
+ (double)uiBlockingNetworkTimeout;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (double)backgroundNetworkTimeout;
+ (double)defaultNetworkTimeout;
+ (double)queryCacheHardTimeout;

- (id)automatedDeviceGroup;
- (id)transparencyVersionStr;
- (id)getOverride:(id)a0;
- (unsigned long long)getEnvironment;
- (BOOL)getBool:(id)a0;
- (id)devicePlatform;
- (double)uiBlockingNetworkTimeout;
- (double)defaultNetworkTimeout;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (void)clearKTSignaturePolicy;
- (unsigned long long)ktSignaturePolicy;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;

@end
