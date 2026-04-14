@interface HKFeatureAvailabilityRequirementBloodOxygenRecordingsAreEnabled : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requiredEntitlements;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)init;
- (BOOL)defaultBoolValueWhenKeyIsMissing;

@end
