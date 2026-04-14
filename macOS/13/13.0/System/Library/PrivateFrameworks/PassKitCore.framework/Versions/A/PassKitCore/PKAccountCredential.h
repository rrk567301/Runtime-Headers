@class PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString, PKAccount;

@interface PKAccountCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAccount *account;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKAccountWebServicePassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)longDescription;
- (id)initWithAccount:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;

@end
