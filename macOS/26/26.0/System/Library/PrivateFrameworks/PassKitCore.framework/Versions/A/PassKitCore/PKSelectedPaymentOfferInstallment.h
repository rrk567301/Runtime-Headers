@class PKPaymentOfferInstallmentAssessment, PKCurrencyAmount;

@interface PKSelectedPaymentOfferInstallment : PKSelectedPaymentOffer <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long selectionType;
@property (retain, nonatomic) PKPaymentOfferInstallmentAssessment *installmentAssessment;
@property (nonatomic) double setupAfterPurchaseStickyDuration;
@property (nonatomic) double setupAfterPurchaseActiveDuration;
@property (nonatomic) BOOL isPreconfiguredOffer;
@property (copy, nonatomic) PKCurrencyAmount *userEnteredAmount;

+ (id)confirmationRecordFollowUpWithInstallmentAssessment:(id)a0 passDetails:(id)a1 criteria:(id)a2 sessionIdentifier:(id)a3;
+ (id)postPurchaseFollowupWithCriteria:(id)a0 passDetails:(id)a1;
+ (id)selectedOfferWithInstallmentAssessment:(id)a0 selectedOfferIdentifier:(id)a1 criteria:(id)a2 passDetails:(id)a3 sessionIdentifier:(id)a4;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSelectionType:(long long)a0 installmentAssessment:(id)a1 selectedOfferIdentifier:(id)a2 criteria:(id)a3 passDetails:(id)a4 sessionIdentifier:(id)a5;
- (BOOL)requiresUserAction;
- (id)selectedInstallmentOffer;
- (void)updateSelectedOfferIdentifier:(id)a0;

@end
