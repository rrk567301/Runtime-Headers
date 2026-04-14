@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)jsonDictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonString;
- (id)_encryptedDataWithCertificatesResponse:(id)a0 publicKeyHash:(id *)a1;
- (id)fundingDetailsUnencryptedDictionary;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;

@end
