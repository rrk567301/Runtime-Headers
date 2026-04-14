@interface HKFeatureAvailabilityRequirementOnboardingNotAcknowledged : HKFeatureAvailabilityOnboardingAcknowledgementRequirement

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)initWithFeatureIdentifier:(id)a0;
- (id)requirementDescription;
- (id)initWithFeatureIdentifier:(id)a0 settingsKey:(id)a1;

@end
