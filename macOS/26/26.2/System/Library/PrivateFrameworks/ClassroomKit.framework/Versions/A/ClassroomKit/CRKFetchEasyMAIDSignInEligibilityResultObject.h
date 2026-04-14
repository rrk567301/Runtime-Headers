@class NSDictionary;

@interface CRKFetchEasyMAIDSignInEligibilityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *eligibility;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
