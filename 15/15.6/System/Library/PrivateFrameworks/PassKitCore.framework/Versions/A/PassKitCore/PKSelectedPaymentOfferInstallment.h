@class PKPaymentOfferInstallmentAssessment;

@interface PKSelectedPaymentOfferInstallment : PKSelectedPaymentOffer <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKPaymentOfferInstallmentAssessment *installmentAssessment;
@property (nonatomic) char isPreconfiguredOffer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInstallmentAssessment:(id)a0 selectedOfferIdentifier:(id)a1 criteriaIdentifier:(id)a2 paymentPass:(id)a3 sessionIdentifier:(id)a4;
- (id)selectedInstallmentOffer;

@end
