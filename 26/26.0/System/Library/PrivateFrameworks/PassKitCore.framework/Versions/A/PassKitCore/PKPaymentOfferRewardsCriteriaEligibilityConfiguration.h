@class NSDecimalNumber, NSString;

@interface PKPaymentOfferRewardsCriteriaEligibilityConfiguration : NSObject <PKPaymentOfferCriteriaEligibilityConfiguration>

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, nonatomic) unsigned long long context;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAmount:(id)a0 currencyCode:(id)a1 merchantCountryCode:(id)a2 context:(unsigned long long)a3 options:(unsigned long long)a4;

@end
