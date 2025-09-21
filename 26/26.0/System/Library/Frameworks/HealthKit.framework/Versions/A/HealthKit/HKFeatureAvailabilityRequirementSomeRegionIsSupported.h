@interface HKFeatureAvailabilityRequirementSomeRegionIsSupported : HKFeatureAvailabilityRegionAvailabilityRequirement

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)isSatisfiedWithRegionAvailability:(id)a0 dataSource:(id)a1 error:(id *)a2;

@end
