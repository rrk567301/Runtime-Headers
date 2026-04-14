@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)activationMethods;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentPass:(id)a0;

@end
