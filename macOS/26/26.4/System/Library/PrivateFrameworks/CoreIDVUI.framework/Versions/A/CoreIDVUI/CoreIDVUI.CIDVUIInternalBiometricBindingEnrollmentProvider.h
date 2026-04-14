@interface CoreIDVUI.CIDVUIInternalBiometricBindingEnrollmentProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)fetchBiometricEnrollmentACLType;
- (void)enrollWithCompletion:(id /* block */)a0;
- (void)fetchAttestationsWithCompletion:(id /* block */)a0;

@end
