@class NSArray, NSDate;

@interface PKPaymentOfferWebServiceRewardsRedemptionsResponse : PKPaymentOfferWebServiceResponse

@property (retain, nonatomic) NSArray *rewardsRedemptions;
@property (nonatomic) BOOL moreComing;
@property (copy, nonatomic) NSDate *lastUpdated;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
