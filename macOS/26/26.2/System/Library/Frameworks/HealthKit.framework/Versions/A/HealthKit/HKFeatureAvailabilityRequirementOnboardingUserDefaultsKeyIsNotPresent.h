@interface HKFeatureAvailabilityRequirementOnboardingUserDefaultsKeyIsNotPresent : HKFeatureAvailabilityRequirementUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requiredEntitlements;
- (id)requirementDescription;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
