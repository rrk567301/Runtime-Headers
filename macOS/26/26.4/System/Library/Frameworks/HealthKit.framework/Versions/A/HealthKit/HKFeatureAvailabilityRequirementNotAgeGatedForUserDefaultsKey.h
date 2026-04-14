@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (BOOL)defaultBoolValueWhenKeyIsMissing;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)requiredEntitlements;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requirementDescription;

@end
