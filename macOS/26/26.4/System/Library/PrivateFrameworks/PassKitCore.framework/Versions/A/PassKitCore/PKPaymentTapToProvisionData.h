@class NSData;

@interface PKPaymentTapToProvisionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) NSData *casdCertificate;
@property (readonly, nonatomic) NSData *transactionID;

- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEncryptedData:(id)a0 casdCertificate:(id)a1 transactionID:(id)a2;

@end
