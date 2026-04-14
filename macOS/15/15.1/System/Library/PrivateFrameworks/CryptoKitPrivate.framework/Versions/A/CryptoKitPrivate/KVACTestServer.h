@class NSData, _TtC16CryptoKitPrivate10KVACServer;

@interface KVACTestServer : NSObject

@property (readonly, nonatomic) _TtC16CryptoKitPrivate10KVACServer *server;
@property (readonly, retain, nonatomic) NSData *keyId;

- (id)init;
- (void).cxx_destruct;
- (id)issueWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 tokenChallenge:(id)a1;

@end
