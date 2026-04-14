@interface LACMaxBiometryFailureProcessor : NSObject <LACEvaluationRequestProcessor> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_biometryType;
}

@property (nonatomic) long long biometryType;

- (id)init;
- (BOOL)canProcessRequest:(id)a0;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
