@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (double)backgroundFollowupDelayPeriod;
+ (double)defaultNetworkTimeout;
+ (id)devicePlatform;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (double)defaultSelfFollowupTicketLifetime;
+ (BOOL)isAccountsInQA;
+ (double)queryCacheHardTimeout;
+ (id)deviceUserAgent;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (double)defaultQueryCacheTimeout;
+ (id)getIMEnvironmentName;
+ (double)queryJustMadeTimeout;
+ (double)dismissFailureAfterSeenPeriod;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (id)getOverride:(id)a0;
+ (BOOL)getBool:(id)a0;
+ (double)uiBlockingNetworkTimeout;
+ (double)backgroundNetworkTimeout;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (id)automatedDeviceGroup;
+ (id)transparencyVersionStr;
+ (unsigned long long)getEnvironment;
+ (double)failureIgnorePeriod;
+ (BOOL)enableSelfValidationXPCActivity;
+ (id)cfPrefsJson;

- (double)defaultNetworkTimeout;
- (id)devicePlatform;
- (id)getOverride:(id)a0;
- (BOOL)getBool:(id)a0;
- (double)uiBlockingNetworkTimeout;
- (id)automatedDeviceGroup;
- (id)transparencyVersionStr;
- (unsigned long long)getEnvironment;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (void)clearKTSignaturePolicy;
- (unsigned long long)ktSignaturePolicy;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;

@end
