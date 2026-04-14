@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (id)init;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
