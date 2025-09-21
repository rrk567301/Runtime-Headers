@interface HKFeatureAvailabilityRequirementNotificationsOnForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
