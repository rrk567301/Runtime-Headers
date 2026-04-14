@class PKSelectedPaymentOffer;

@interface PKPaymentOfferSelectedConfirmationRecord : PKPaymentOfferConfirmationRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSelectedPaymentOffer *selectedOffer;

- (id)sessionIdentifier;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)description;
- (id)criteriaIdentifier;
- (id)initWithTransaction:(id)a0 context:(unsigned long long)a1 selectedOffer:(id)a2;
- (id)rewardsRedemptionIntent;
- (id)selectedOfferIdentifier;

@end
