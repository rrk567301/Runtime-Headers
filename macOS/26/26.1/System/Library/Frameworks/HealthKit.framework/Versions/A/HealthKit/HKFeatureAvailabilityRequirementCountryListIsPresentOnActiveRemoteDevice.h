@interface HKFeatureAvailabilityRequirementCountryListIsPresentOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)requiredEntitlements;

@end
