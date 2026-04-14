@interface DMCFeatureOverrides : NSObject

+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)useHTTPLogging;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)appleMDMWellKnownURLWithDefaultValue:(id)a0;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)ignoreEnrollmentMode;
+ (id)productNameWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (id)serviceDiscoveryFallbackServerVersion;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (BOOL)shouldSimulateMDMAccountDrivenEnrollment;
+ (id)simulatedMDMAccountDrivenEnrollmentAuthMethod;
+ (id)simulatedMDMAccountDrivenEnrollmentDefaultUsername;
+ (id)simulatedMDMAccountDrivenEnrollmentProfile;
+ (id)simulatedMDMEnrollmentMode;
+ (id)activationRecordFlagsWithFlags:(id)a0;
+ (BOOL)_isUnknownProduct;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)allowAnyESSOApplicationEntitlements;
+ (id)attestationRateLimitOverrideMinutes;
+ (BOOL)bypassMDMTLSClientAuthentication;
+ (BOOL)bypassWatchUnpairWhenUnenrolling;
+ (id)deviceNameWithDefaultValue:(id)a0;
+ (id)dictForDefaultsKey:(id)a0;
+ (id)gestaltOverrideForKey:(struct __CFString { } *)a0 withDefaultValue:(id)a1;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (id)modelNumberWithDefaultValue:(id)a0;
+ (id)objectForDefaultsKey:(id)a0;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)a0;
+ (BOOL)useNonEphemeralWebAuthSession;
+ (BOOL)watchEnrollmentAllowLocalProfile;

@end
