@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityRequirementUserDefaultEvaluator

@property (readonly, nonatomic) BOOL defaultBoolValueWhenKeyIsMissing;

- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)defaultValueWhenKeyIsMissing;
- (BOOL)isSatisfiedForValue:(id)a0;

@end
