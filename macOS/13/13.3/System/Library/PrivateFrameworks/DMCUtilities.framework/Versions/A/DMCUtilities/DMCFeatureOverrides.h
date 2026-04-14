@interface DMCFeatureOverrides : NSObject

+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)useHTTPLogging;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)simulatedMDMBYODDefaultUsername;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)ignoreEnrollmentMode;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (BOOL)shouldSimulateMDMBYODSignIn;
+ (id)simulatedMDMBYODAuthMethod;
+ (id)simulatedMDMBYODProfile;
+ (id)activationRecordFlagsWithFlags:(id)a0;
+ (BOOL)_isUnknownProduct;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)allowAnyESSOApplicationEntitlements;
+ (id)attestationRateLimitOverrideMinutes;
+ (BOOL)bypassMDMTLSClientAuthentication;
+ (id)deviceNameWithDefaultValue:(id)a0;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)gestaltOverrideForKey:(const struct __CFString { } *)a0 withDefaultValue:(id)a1;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (id)modelNumberWithDefaultValue:(id)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;
+ (id)productNameWithDefaultValue:(id)a0;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)a0;
+ (BOOL)useNonEphemeralWebAuthSession;

@end
