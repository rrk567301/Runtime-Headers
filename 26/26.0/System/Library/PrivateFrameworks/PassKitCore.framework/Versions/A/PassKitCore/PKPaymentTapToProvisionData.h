@class NSData;

@interface PKPaymentTapToProvisionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) NSData *casdCertificate;
@property (readonly, nonatomic) NSData *transactionID;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncryptedData:(id)a0 casdCertificate:(id)a1 transactionID:(id)a2;

@end
