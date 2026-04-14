@interface HKFeatureAvailabilityRequirementOnboardingAcknowledged : HKFeatureAvailabilityOnboardingAcknowledgementRequirement

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)requiredEntitlements;
- (id)initWithFeatureIdentifier:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 settingsKey:(id)a1;

@end
