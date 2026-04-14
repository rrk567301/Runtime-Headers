@interface HKFeatureAvailabilityRequirementNotificationsOnForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)requiredEntitlements;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requirementDescription;

@end
