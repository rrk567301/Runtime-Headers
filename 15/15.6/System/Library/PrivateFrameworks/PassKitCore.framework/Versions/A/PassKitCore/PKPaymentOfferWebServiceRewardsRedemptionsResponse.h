@class NSArray, NSDate;

@interface PKPaymentOfferWebServiceRewardsRedemptionsResponse : PKPaymentOfferWebServiceResponse

@property (retain, nonatomic) NSArray *rewardsRedemptions;
@property (nonatomic) char moreComing;
@property (copy, nonatomic) NSDate *lastUpdated;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
