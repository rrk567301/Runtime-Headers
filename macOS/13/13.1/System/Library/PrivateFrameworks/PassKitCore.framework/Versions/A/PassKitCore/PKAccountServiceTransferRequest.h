@class PKPaymentPass, NSString, PKPeerPaymentAccount, NSURL, PKBankAccountInformation, PKAccount;

@interface PKAccountServiceTransferRequest : PKPaymentRequest {
    unsigned long long _featureIdentifier;
}

@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, copy, nonatomic) NSURL *accountBaseURL;
@property (readonly, nonatomic) PKBankAccountInformation *defaultBankAccount;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) unsigned long long transferType;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *peerPaymentPass;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_bankAccountsForFundingSources:(id)a0;
- (id)initWithAccount:(id)a0 peerPaymentAccount:(id)a1 peerPaymentPass:(id)a2 transferType:(unsigned long long)a3 fundingSources:(id)a4 currencyAmount:(id)a5;
- (id)_paymentSummaryItemsWithCurrencyAmount:(id)a0;
- (BOOL)isEqualToAccountServicePaymentRequest:(id)a0;

@end
