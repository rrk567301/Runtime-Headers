@interface CryptoKitPrivate.ARCCredentialWrapper : NSObject {
    void /* unknown type, empty encoding */ ciphersuite;
    void /* unknown type, empty encoding */ credential;
}

- (id)init;
- (void).cxx_destruct;
- (id)getCredentialDataAndReturnError:(id *)a0;
- (long long)getRemainingPresentationCountWithPresentationContext:(id)a0 presentationLimit:(long long)a1;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)makePresentationWithPresentationContext:(id)a0 presentationLimit:(long long)a1 error:(id *)a2;

@end
