@interface HKFeatureAvailabilityRequirementBloodOxygenRecordingsAreEnabled : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requiredEntitlements;
- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (id)requirementDescription;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)init;

@end
