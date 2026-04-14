@class NSDictionary, NSArray;

@interface PKPayLaterProductAssessmentCollection : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_productAssessments;
    NSArray *_eligibleProductAssessments;
    NSArray *_ineligibleProductAssessments;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eligibleProductAssessments;
- (id)ineligibleProductAssessments;
- (id)productAssessmentForProductType:(unsigned long long)a0;
- (id)financingOptionWithSelectionIdentifier:(id)a0 productType:(unsigned long long)a1;

@end
