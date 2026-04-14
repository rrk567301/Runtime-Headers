@interface CryptoKitPrivate.ARCAwaitingActivationWrapper : NSObject {
    void /* unknown type, empty encoding */ ciphersuite;
    void /* unknown type, empty encoding */ precredential;
}

- (void).cxx_destruct;
- (id)init;
- (id)makeRequest;
- (id)initWithRequestContext:(id)a0 serverPublicKeyData:(id)a1 error:(id *)a2;
- (id)makeCredentialWithResponseData:(id)a0 error:(id *)a1;

@end
