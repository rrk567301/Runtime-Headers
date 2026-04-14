@class NSDictionary;

@interface CRKFetchEasyMAIDSignInEligibilityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *eligibility;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
