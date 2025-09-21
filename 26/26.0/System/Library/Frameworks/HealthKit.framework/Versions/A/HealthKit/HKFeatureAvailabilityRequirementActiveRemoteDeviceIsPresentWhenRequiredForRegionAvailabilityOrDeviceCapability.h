@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapability : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;

@end
