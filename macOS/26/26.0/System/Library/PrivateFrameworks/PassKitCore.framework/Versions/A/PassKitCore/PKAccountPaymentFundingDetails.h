@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonString;
- (id)_encryptedDataWithCertificatesResponse:(id)a0 publicKeyHash:(id *)a1;
- (id)fundingDetailsUnencryptedDictionary;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;

@end
