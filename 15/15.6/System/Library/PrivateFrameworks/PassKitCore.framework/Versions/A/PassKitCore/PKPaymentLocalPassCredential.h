@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isEqualToCredential:(id)a0;
- (char)couldSupportSuperEasyProvisioning;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentPass:(id)a0;
- (char)supportsSuperEasyProvisioning;

@end
