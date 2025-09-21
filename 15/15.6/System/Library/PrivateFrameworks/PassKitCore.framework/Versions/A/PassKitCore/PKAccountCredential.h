@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)longDescription;
- (id)initWithAccount:(id)a0;
- (char)_isEqualToCredential:(id)a0;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (char)supportsSuperEasyProvisioning;

@end
