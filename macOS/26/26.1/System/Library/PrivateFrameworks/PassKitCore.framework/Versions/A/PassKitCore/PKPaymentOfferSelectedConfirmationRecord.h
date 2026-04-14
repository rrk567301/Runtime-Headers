@class PKSelectedPaymentOffer;

@interface PKPaymentOfferSelectedConfirmationRecord : PKPaymentOfferConfirmationRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSelectedPaymentOffer *selectedOffer;

- (unsigned long long)hash;
- (id)sessionIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)criteriaIdentifier;
- (id)initWithTransaction:(id)a0 context:(unsigned long long)a1 selectedOffer:(id)a2;
- (id)rewardsRedemptionIntent;
- (id)selectedOfferIdentifier;

@end
