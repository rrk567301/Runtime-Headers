@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : HKFeatureAvailabilityBaseRequirement

+ (char)supportsSecureCoding;
+ (id)requirementIdentifier;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)requirementDescription;

@end
