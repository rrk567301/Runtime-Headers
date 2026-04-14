@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (BOOL)defaultValueWhenKeyIsMissing;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
