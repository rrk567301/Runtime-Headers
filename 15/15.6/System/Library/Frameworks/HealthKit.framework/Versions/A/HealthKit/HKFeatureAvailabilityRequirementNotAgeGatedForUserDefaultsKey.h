@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (char)defaultBoolValueWhenKeyIsMissing;
- (id)initWithUserDefaultsKey:(id)a0;
- (char)isSatisfiedForBoolValue:(char)a0;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
