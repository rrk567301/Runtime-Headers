@interface HKFeatureAvailabilityRequirementOnboardingUserDefaultsKeyIsPresent : HKFeatureAvailabilityRequirementUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requiredEntitlements;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
