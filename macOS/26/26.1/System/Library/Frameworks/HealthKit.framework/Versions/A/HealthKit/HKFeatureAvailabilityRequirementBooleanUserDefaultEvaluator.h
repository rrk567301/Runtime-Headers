@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityRequirementUserDefaultEvaluator

@property (readonly, nonatomic) BOOL defaultBoolValueWhenKeyIsMissing;

- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)defaultValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
