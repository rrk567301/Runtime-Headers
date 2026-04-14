@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)defaultValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
