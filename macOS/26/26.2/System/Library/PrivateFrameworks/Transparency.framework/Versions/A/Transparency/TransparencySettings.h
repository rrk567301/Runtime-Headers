@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (double)uiBlockingNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (id)deviceUserAgent;
+ (double)backgroundFollowupDelayPeriod;
+ (double)backgroundNetworkTimeout;
+ (id)getIMEnvironmentName;
+ (unsigned long long)getEnvironment;
+ (double)defaultNetworkTimeout;
+ (double)failureIgnorePeriod;
+ (double)dismissFailureAfterSeenPeriod;
+ (BOOL)isAccountsInQA;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (BOOL)enableSelfValidationXPCActivity;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (BOOL)getBool:(id)a0;
+ (id)devicePlatform;
+ (id)cfPrefsJson;
+ (id)getOverride:(id)a0;
+ (id)transparencyVersionStr;
+ (double)defaultSelfFollowupTicketLifetime;
+ (double)queryCacheHardTimeout;
+ (id)automatedDeviceGroup;
+ (double)queryJustMadeTimeout;

- (double)uiBlockingNetworkTimeout;
- (unsigned long long)getEnvironment;
- (double)defaultNetworkTimeout;
- (BOOL)getBool:(id)a0;
- (id)devicePlatform;
- (id)getOverride:(id)a0;
- (id)transparencyVersionStr;
- (id)automatedDeviceGroup;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (void)clearKTSignaturePolicy;
- (unsigned long long)ktSignaturePolicy;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;

@end
