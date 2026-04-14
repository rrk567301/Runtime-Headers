@interface HKFeatureAvailabilityRequirementSomeRegionIsSupported : HKFeatureAvailabilityRegionAvailabilityRequirement

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)requiredEntitlements;
- (id)isSatisfiedWithRegionAvailability:(id)a0 dataSource:(id)a1 error:(id *)a2;

@end
