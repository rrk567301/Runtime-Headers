@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonString;
- (id)jsonDictionaryRepresentation;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)fundingDetailsUnencryptedDictionary;
- (id)_encryptedDataWithCertificatesResponse:(id)a0 publicKeyHash:(id *)a1;

@end
