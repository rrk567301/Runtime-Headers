@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : HKFeatureAvailabilityBaseRequirement

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
