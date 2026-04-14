@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)automatedDeviceGroup;
+ (double)queryCacheHardTimeout;
+ (id)cfPrefsJson;
+ (BOOL)isAccountsInQA;
+ (double)defaultQueryCacheTimeout;
+ (BOOL)getBool:(id)a0;
+ (double)queryJustMadeTimeout;
+ (double)failureIgnorePeriod;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (double)defaultSelfFollowupTicketLifetime;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (double)defaultNetworkTimeout;
+ (unsigned long long)getEnvironment;
+ (id)transparencyVersionStr;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (double)backgroundNetworkTimeout;
+ (double)backgroundFollowupDelayPeriod;
+ (id)devicePlatform;
+ (id)getOverride:(id)a0;
+ (double)dismissFailureAfterSeenPeriod;
+ (id)getIMEnvironmentName;
+ (BOOL)enableSelfValidationXPCActivity;
+ (double)uiBlockingNetworkTimeout;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (id)deviceUserAgent;

- (id)automatedDeviceGroup;
- (BOOL)getBool:(id)a0;
- (double)defaultNetworkTimeout;
- (unsigned long long)getEnvironment;
- (id)transparencyVersionStr;
- (id)devicePlatform;
- (id)getOverride:(id)a0;
- (double)uiBlockingNetworkTimeout;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (void)clearKTSignaturePolicy;
- (unsigned long long)ktSignaturePolicy;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;

@end
