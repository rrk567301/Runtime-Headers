@class NSError, LAContext, NSData;

@interface ICLocalAuthentication : NSObject

@property (class, readonly, nonatomic) long long biometricsPolicy;
@property (class, readonly, nonatomic) LAContext *biometricsContext;
@property (class, readonly, nonatomic) NSError *biometricsContextError;
@property (class, readonly, nonatomic) char biometricsAvailable;
@property (class, readonly, nonatomic) char biometricsEnrolled;
@property (class, readonly, nonatomic) char biometricsLockedOut;
@property (class, readonly, nonatomic) long long biometricsType;
@property (class, readonly, copy, nonatomic) NSData *biometricsPolicyState;
@property (class, readonly, nonatomic) char hasPasscode;

+ (void)setHasPasscode:(char)a0;
+ (void)checkBiometricsPolicyState;
+ (void)refreshBiometricsContext;
+ (void)refreshHasPasscode;
+ (void)setBiometricsContext:(id)a0;
+ (void)setBiometricsContextError:(id)a0;

@end
