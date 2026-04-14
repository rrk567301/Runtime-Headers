@interface HKFeatureAvailabilityRequirementOnboardingNotAcknowledged : HKFeatureAvailabilityOnboardingAcknowledgementRequirement

+ (id)requirementIdentifier;

- (id)initWithFeatureIdentifier:(id)a0;
- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)initWithFeatureIdentifier:(id)a0 settingsKey:(id)a1;

@end
