@class PKPaymentOfferRewardsRedemptionIntent;

@interface PKSelectedPaymentOfferRewards : PKSelectedPaymentOffer <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentOfferRewardsRedemptionIntent *rewardsRedemptionIntent;
@property (nonatomic) double stickyDuration;
@property (nonatomic) double activeDuration;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRewardsRedemptionIntent:(id)a0 criteria:(id)a1 passDetails:(id)a2 sessionIdentifier:(id)a3;

@end
