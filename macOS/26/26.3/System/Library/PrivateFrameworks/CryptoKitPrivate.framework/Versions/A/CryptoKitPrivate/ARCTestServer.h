@class _TtC16CryptoKitPrivate9ARCServer;

@interface ARCTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate9ARCServer *server;

- (id)init;
- (void).cxx_destruct;
- (id)getServerPublicKey;
- (id)respondWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 nonce:(unsigned long long)a1 requestContext:(id)a2 presentationContext:(id)a3 presentationLimit:(unsigned long long)a4;

@end
