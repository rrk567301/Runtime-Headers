@interface HKFeatureAvailabilityRequirementOnboardingUserDefaultsKeyIsPresent : HKFeatureAvailabilityRequirementUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
