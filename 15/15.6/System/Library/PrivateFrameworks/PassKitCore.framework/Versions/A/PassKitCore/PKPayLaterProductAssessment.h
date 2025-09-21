@class PKPayLaterProductAssessmentInstallmentSummary, NSArray, NSDictionary, PKPayLaterPreliminaryAssessment, NSDecimalNumber;

@interface PKPayLaterProductAssessment : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_financingOptionIdentifierMap;
    PKPayLaterProductAssessmentInstallmentSummary *_lowestPossibleInstallmentSummary;
    NSDecimalNumber *_minimumAPR;
    NSDecimalNumber *_maximumAPR;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long productType;
@property (readonly, nonatomic) unsigned long long financingEligibility;
@property (readonly, copy, nonatomic) NSArray *financingOptions;
@property (readonly, nonatomic) PKPayLaterPreliminaryAssessment *preliminaryAssessment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEligible;
- (id)financingOptionWithIdentifier:(id)a0;

@end
