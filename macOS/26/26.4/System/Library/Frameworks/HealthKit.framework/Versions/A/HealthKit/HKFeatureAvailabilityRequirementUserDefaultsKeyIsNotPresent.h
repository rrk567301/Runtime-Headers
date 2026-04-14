@interface HKFeatureAvailabilityRequirementUserDefaultsKeyIsNotPresent : HKFeatureAvailabilityRequirementUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requiredEntitlements;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requirementDescription;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
