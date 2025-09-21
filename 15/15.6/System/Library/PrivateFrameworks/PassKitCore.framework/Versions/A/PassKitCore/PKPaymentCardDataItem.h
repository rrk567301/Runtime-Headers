@class PKPaymentPass, CNContact, PKPaymentApplication, PKCurrencyAmount;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic) char showPeerPaymentBalance;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) char requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) char shouldShowCardArt;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (long long)status;
- (id)errors;
- (char)isValidWithError:(id *)a0;
- (id)paymentContactFormatErrors;

@end
