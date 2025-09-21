@class NSString, PKPaymentOfferRewardsRedemptionIntent, NSURL, PKPaymentOffersSessionTransactionDetails, PKSelectedPaymentOffer;

@interface PKPaymentOfferWebServiceConfirmOffer : PKPaymentOfferWebServiceRequest

@property (copy, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long selectionType;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (copy, nonatomic) NSString *selectedOfferIdentifier;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) PKPaymentOfferRewardsRedemptionIntent *rewardsRedemptionIntent;
@property (copy, nonatomic) NSString *passSerialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *fpanIdentifier;
@property (retain, nonatomic) PKPaymentOffersSessionTransactionDetails *transactionDetails;
@property (retain, nonatomic) PKSelectedPaymentOffer *selectedOffer;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
