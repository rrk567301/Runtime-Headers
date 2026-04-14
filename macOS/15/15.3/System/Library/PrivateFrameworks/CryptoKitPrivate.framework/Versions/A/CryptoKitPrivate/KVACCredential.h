@class NSData, _TtC16CryptoKitPrivate21KVACCredentialWrapper;

@interface KVACCredential : NSObject

@property (readonly, retain, nonatomic) _TtC16CryptoKitPrivate21KVACCredentialWrapper *credential;
@property (readonly, retain, nonatomic) NSData *serverKeyId;
@property (readonly, retain, nonatomic) NSData *credentialData;

- (void).cxx_destruct;
- (id)initWithCredentialData:(id)a0 error:(id *)a1;
- (id)initWithIssuanceData:(id)a0 client:(id)a1 request:(id)a2 error:(id *)a3;
- (id)presentWithTagPrefix:(id)a0 error:(id *)a1;

@end
