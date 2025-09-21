@interface HKFeatureAvailabilityRequirementBloodOxygenRecordingsAreEnabled : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)init;
- (char)defaultBoolValueWhenKeyIsMissing;
- (char)isSatisfiedForBoolValue:(char)a0;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
