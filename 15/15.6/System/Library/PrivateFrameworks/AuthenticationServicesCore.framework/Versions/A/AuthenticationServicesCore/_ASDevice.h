@interface _ASDevice : NSObject

@property (class, readonly) char isBiometricAuthenticationAvailable;
@property (class, readonly) char isCompanionAuthenticationAvailable;
@property (class, readonly) char shouldRequireLocalAuthenticationForPasswords;
@property (class, readonly) char shouldRequireLocalAuthenticationForPlatformCredentials;
@property (class, readonly) long long biometryType;
@property (class, readonly) char isCABLEClient;

+ (int)deviceClass;
+ (long long)_localAuthenticationBiometricsAvailability;

@end
