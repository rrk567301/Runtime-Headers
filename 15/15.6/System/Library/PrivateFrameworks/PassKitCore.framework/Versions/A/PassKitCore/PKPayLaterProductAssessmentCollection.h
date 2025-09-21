@class NSDictionary, NSArray;

@interface PKPayLaterProductAssessmentCollection : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_productAssessments;
    NSArray *_eligibleProductAssessments;
    NSArray *_ineligibleProductAssessments;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eligibleProductAssessments;
- (id)financingOptionWithSelectionIdentifier:(id)a0 productType:(unsigned long long)a1;
- (id)ineligibleProductAssessments;
- (id)productAssessmentForProductType:(unsigned long long)a0;

@end
