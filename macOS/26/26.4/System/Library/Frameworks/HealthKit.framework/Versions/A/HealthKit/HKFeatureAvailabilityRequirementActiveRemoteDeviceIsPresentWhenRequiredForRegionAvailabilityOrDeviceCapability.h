@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapability : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement

+ (id)requirementIdentifier;

- (BOOL)isEqual:(id)a0;
- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;

@end
