@class PKPayLaterProductAssessmentInstallmentSummary, NSArray, NSDictionary, PKPayLaterPreliminaryAssessment, NSDecimalNumber;

@interface PKPayLaterProductAssessment : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_financingOptionIdentifierMap;
    PKPayLaterProductAssessmentInstallmentSummary *_lowestPossibleInstallmentSummary;
    NSDecimalNumber *_minimumAPR;
    NSDecimalNumber *_maximumAPR;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long productType;
@property (readonly, nonatomic) unsigned long long financingEligibility;
@property (readonly, copy, nonatomic) NSArray *financingOptions;
@property (readonly, nonatomic) PKPayLaterPreliminaryAssessment *preliminaryAssessment;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)financingOptionWithIdentifier:(id)a0;
- (BOOL)isEligible;
- (id)analyticsFinancingOptionType;

@end
