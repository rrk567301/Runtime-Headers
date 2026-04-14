@interface CryptoKitPrivate.ARCServer : NSObject {
    void /* unknown type, empty encoding */ server;
}

- (void).cxx_destruct;
- (id)init;
- (id)getServerPublicKey;
- (id)respondWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 nonce:(long long)a1 requestContext:(id)a2 presentationContext:(id)a3 presentationLimit:(long long)a4;

@end
