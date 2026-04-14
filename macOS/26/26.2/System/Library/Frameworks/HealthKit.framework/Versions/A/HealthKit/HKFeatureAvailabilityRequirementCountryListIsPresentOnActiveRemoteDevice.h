@interface HKFeatureAvailabilityRequirementCountryListIsPresentOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement

+ (id)requirementIdentifier;

- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)requiredEntitlements;
- (id)requirementDescription;

@end
