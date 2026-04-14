@class _TtC9CoreIDVUI48CIDVUIInternalBiometricBindingEnrollmentProvider;

@interface CIDVUIBiometricBindingEnrollmentProvider : NSObject

@property (retain) _TtC9CoreIDVUI48CIDVUIInternalBiometricBindingEnrollmentProvider *internalProvider;
@property (readonly, nonatomic) unsigned long long biometricEnrollmentACLType;

- (id)init;
- (void).cxx_destruct;
- (void)enrollWithCompletion:(id /* block */)a0;
- (void)fetchAttestationsWithCompletion:(id /* block */)a0;

@end
