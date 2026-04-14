@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : HKFeatureAvailabilityBaseRequirement

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)requirementDescription;
- (unsigned long long)hash;
- (id)requiredEntitlements;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;

@end
