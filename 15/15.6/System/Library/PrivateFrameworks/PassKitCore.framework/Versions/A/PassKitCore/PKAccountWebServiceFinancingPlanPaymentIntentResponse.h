@class NSArray, NSSet, NSString, PKCurrencyAmount, NSDictionary;

@interface PKAccountWebServiceFinancingPlanPaymentIntentResponse : PKPaginatedAccountWebServiceResponse <NSSecureCoding> {
    NSDictionary *_bankAcceptedFundingSources;
}

@property (class, readonly) char supportsSecureCoding;

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
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)bankAcceptedFundingSources;
- (char)isEqualToFinancingPlanPaymentIntentResponse:(id)a0;

@end
