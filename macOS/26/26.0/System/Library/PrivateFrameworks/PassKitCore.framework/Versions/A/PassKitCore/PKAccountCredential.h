@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (id)initWithAccount:(id)a0;
- (id)longDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)activationMethods;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;

@end
