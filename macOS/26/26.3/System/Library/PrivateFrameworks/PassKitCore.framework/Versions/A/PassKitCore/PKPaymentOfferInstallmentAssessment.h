@class NSString, NSArray, PKPaymentOfferAction, PKPaymentOfferDynamicContent;

@interface PKPaymentOfferInstallmentAssessment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long offerEligibility;
@property (retain, nonatomic) NSArray *offers;
@property (retain, nonatomic) PKPaymentOfferAction *action;
@property (copy, nonatomic) NSString *selectedOfferIdentifier;
@property (retain, nonatomic) PKPaymentOfferDynamicContent *dynamicContent;
@property (copy, nonatomic) NSString *sessionIdentifier;

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)isEligible;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)installmentOfferWithIdentifier:(id)a0;
- (id)ineligibleDynamicContent;
- (id)initWithDictionary:(id)a0 sessionIdentifier:(id)a1;
- (void)populatePreferredLanguage:(id)a0;
- (void)updateSelectedOfferIdentifier:(id)a0;

@end
