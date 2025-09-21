@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)requirementDescription;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
