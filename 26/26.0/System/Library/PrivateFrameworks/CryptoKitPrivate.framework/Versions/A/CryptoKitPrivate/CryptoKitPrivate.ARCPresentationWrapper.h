@interface CryptoKitPrivate.ARCPresentationWrapper : NSObject {
    void /* unknown type, empty encoding */ presentation;
    void /* unknown type, empty encoding */ nonce;
    void /* unknown type, empty encoding */ ciphersuite;
}

- (id)init;
- (void).cxx_destruct;
- (long long)getNonce;
- (id)getPresentationData;
- (id)initWithPresentationData:(id)a0 nonce:(long long)a1 error:(id *)a2;

@end
