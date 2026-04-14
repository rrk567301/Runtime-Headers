@interface TransparencySettings : NSObject <TransparencySettingsProtocol>

+ (id)automatedDeviceGroup;
+ (double)queryCacheHardTimeout;
+ (id)transparencyVersionStr;
+ (double)defaultQueryCacheTimeout;
+ (BOOL)enableSelfValidationXPCActivity;
+ (BOOL)isAccountsInQA;
+ (double)defaultNetworkTimeout;
+ (double)defaultSelfFollowupTicketLifetime;
+ (id)deviceUserAgent;
+ (id)sharedSettings;
+ (id)getOverride:(id)a0;
+ (double)failureIgnorePeriod;
+ (BOOL)getBool:(id)a0 defaultValue:(BOOL)a1;
+ (id)devicePlatform;
+ (double)uiBlockingNetworkTimeout;
+ (unsigned long long)backgroundFollowupFailureCount;
+ (double)dismissFailureAfterSeenPeriod;
+ (BOOL)getBool:(id)a0;
+ (unsigned long long)getEnvironment;
+ (double)backgroundNetworkTimeout;
+ (id)jsonArrayFromPlistArray:(id)a0;
+ (id)cfPrefsJson;
+ (id)getIMEnvironmentName;
+ (id)jsonDictFromPlistDict:(id)a0;
+ (double)backgroundFollowupDelayPeriod;
+ (double)queryJustMadeTimeout;

- (id)automatedDeviceGroup;
- (id)transparencyVersionStr;
- (double)defaultNetworkTimeout;
- (id)deviceUserAgent;
- (id)getOverride:(id)a0;
- (id)devicePlatform;
- (double)uiBlockingNetworkTimeout;
- (BOOL)getBool:(id)a0;
- (unsigned long long)getEnvironment;
- (double)atBackgroundFollowupDelayPeriod;
- (BOOL)allowsInternalSecurityPolicies;
- (void)clearKTSignaturePolicy;
- (unsigned long long)ktSignaturePolicy;
- (BOOL)optionalEnforcement;
- (BOOL)systemFailureFeatureEnabled;
- (id)testingPeerValidationFailing;
- (id)testingSelfValidationFailing;

@end
