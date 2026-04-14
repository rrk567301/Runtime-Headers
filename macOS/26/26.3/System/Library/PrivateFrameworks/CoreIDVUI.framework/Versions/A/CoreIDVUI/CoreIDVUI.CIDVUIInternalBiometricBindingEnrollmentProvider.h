@interface CoreIDVUI.CIDVUIInternalBiometricBindingEnrollmentProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)fetchBiometricEnrollmentACLType;
- (void)enrollWithCompletion:(id /* block */)a0;
- (void)fetchAttestationsWithCompletion:(id /* block */)a0;

@end
