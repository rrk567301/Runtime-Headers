@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityRequirementUserDefaultEvaluator

@property (readonly, nonatomic) char defaultBoolValueWhenKeyIsMissing;

- (id)defaultValueWhenKeyIsMissing;
- (char)isSatisfiedForBoolValue:(char)a0;
- (char)isSatisfiedForValue:(id)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
