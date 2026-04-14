@class NSArray, NSSet, NSString, PKCurrencyAmount, NSDictionary;

@interface PKAccountWebServiceFinancingPlanPaymentIntentResponse : PKPaginatedAccountWebServiceResponse {
    NSDictionary *_bankAcceptedFundingSources;
}

@property (copy, nonatomic) NSArray *acceptedFundingSources;
@property (copy, nonatomic) NSArray *supportedRepaymentNetworks;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic) unsigned long long supportedRepaymentTypes;
@property (copy, nonatomic) NSSet *supportedRepaymentCountries;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *totalSavedInterest;
@property (retain, nonatomic) PKCurrencyAmount *payoffAmount;
@property (retain, nonatomic) PKCurrencyAmount *minimumAmount;
@property (retain, nonatomic) NSArray *lastUsedFundingSources;

- (id)description;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)bankAcceptedFundingSources;

@end
