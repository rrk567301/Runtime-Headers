@class NSData;

@interface CryptoKitPrivate.KVACServer : NSObject {
    void /* unknown type, empty encoding */ server;
    void /* unknown type, empty encoding */ keyId;
}

@property (nonatomic, readonly) NSData *keyId;

- (id)init;
- (void).cxx_destruct;
- (id)issueWithRequestData:(id)a0 error:(id *)a1;
- (BOOL)verifyWithPresentationData:(id)a0 tokenChallenge:(id)a1;

@end
