@class NSData;

@interface SESShortLivedKey : NSObject

@property (readonly) NSData *keyData;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *seid;

- (void).cxx_destruct;
- (id)initWithKeyData:(id)a0 seid:(id)a1 error:(id *)a2;

@end
