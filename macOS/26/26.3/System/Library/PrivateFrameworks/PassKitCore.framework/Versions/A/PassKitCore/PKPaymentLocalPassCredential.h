@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)activationMethods;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentPass:(id)a0;

@end
