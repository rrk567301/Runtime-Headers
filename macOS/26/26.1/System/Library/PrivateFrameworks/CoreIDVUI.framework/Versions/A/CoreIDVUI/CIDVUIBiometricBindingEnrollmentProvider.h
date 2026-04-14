@interface CIDVUIBiometricBindingEnrollmentProvider : NSObject

@property (readonly, nonatomic) unsigned long long biometricEnrollmentACLType;

- (id)init;
- (void)enrollWithCompletion:(id /* block */)a0;
- (void)fetchAttestationsWithCompletion:(id /* block */)a0;

@end
