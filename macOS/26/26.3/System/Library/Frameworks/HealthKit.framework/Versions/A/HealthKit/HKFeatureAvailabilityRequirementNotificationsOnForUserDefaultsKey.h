@interface HKFeatureAvailabilityRequirementNotificationsOnForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)defaultBoolValueWhenKeyIsMissing;

@end
