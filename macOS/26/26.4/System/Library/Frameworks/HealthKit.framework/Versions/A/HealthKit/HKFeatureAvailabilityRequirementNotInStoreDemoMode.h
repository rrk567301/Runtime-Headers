@interface HKFeatureAvailabilityRequirementNotInStoreDemoMode : HKFeatureAvailabilityBaseRequirement

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)requiredEntitlements;
- (id)initWithCoder:(id)a0;
- (id)requirementDescription;

@end
