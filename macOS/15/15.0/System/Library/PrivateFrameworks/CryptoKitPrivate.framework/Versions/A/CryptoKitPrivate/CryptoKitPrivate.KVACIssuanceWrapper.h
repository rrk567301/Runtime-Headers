@class NSData;

@interface CryptoKitPrivate.KVACIssuanceWrapper : NSObject {
    void /* unknown type, empty encoding */ issuance;
    void /* unknown type, empty encoding */ keyId;
    void /* unknown type, empty encoding */ issuanceData;
}

@property (nonatomic, readonly) NSData *keyId;
@property (nonatomic, readonly) NSData *issuanceData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIssuanceData:(id)a0 error:(id *)a1;

@end
