@class NSDictionary;

@interface CRKFetchRestrictionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByRestriction;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
