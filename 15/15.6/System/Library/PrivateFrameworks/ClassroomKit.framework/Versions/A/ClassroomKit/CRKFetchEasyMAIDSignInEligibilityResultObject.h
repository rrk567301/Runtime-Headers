@class NSDictionary;

@interface CRKFetchEasyMAIDSignInEligibilityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *eligibility;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
