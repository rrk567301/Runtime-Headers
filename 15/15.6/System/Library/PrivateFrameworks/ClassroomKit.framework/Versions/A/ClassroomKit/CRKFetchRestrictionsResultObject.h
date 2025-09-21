@class NSDictionary;

@interface CRKFetchRestrictionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByRestriction;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
