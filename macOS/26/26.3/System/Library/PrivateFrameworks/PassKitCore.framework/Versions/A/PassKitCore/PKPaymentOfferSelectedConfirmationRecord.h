@class PKSelectedPaymentOffer;

@interface PKPaymentOfferSelectedConfirmationRecord : PKPaymentOfferConfirmationRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSelectedPaymentOffer *selectedOffer;

- (id)sessionIdentifier;
- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)criteriaIdentifier;
- (id)initWithTransaction:(id)a0 context:(unsigned long long)a1 selectedOffer:(id)a2;
- (id)rewardsRedemptionIntent;
- (id)selectedOfferIdentifier;

@end
