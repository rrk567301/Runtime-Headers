@interface DMCFeatureOverrides : NSObject

+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (BOOL)useHTTPLogging;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)ignoreEnrollmentMode;
+ (id)numberForDefaultsKey:(id)a0;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (BOOL)useNonEphemeralWebAuthSession;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)activationRecordFlagsWithFlags:(id)a0;
+ (id)depResponseDataFromData:(id)a0;
+ (id)depResponseContentTypeFromContentType:(id)a0;
+ (id)depProvisionalEnrollmentURLStringWithURLString:(id)a0;
+ (id)depConfigurationEnrollmentURLStringWithURLString:(id)a0;
+ (id)depRemoveEnrollmentURLStringWithURLString:(id)a0;
+ (id)depDeviceSerialNumberWithValue:(id)a0;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (id)productNameWithDefaultValue:(id)a0;

@end
