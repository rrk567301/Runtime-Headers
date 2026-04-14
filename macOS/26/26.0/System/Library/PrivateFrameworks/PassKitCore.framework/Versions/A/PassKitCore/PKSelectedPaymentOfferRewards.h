@class PKPaymentOfferRewardsRedemptionIntent;

@interface PKSelectedPaymentOfferRewards : PKSelectedPaymentOffer <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentOfferRewardsRedemptionIntent *rewardsRedemptionIntent;
@property (nonatomic) double stickyDuration;
@property (nonatomic) double activeDuration;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRewardsRedemptionIntent:(id)a0 criteria:(id)a1 passDetails:(id)a2 sessionIdentifier:(id)a3;

@end
