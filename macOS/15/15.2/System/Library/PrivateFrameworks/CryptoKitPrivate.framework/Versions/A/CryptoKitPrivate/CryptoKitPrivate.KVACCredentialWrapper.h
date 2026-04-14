@class NSData;

@interface CryptoKitPrivate.KVACCredentialWrapper : NSObject {
    void /* unknown type, empty encoding */ credentialData;
    void /* unknown type, empty encoding */ serverKeyId;
    void /* unknown type, empty encoding */ credential;
}

@property (nonatomic, readonly) NSData *credentialData;
@property (nonatomic, readonly) NSData *serverKeyId;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)makePresentationWithTagPrefix:(id)a0 error:(id *)a1;

@end
