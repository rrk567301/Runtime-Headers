@class NSString;

@interface HKFeatureAvailabilityRequirementUserDefaultEvaluator : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (readonly, nonatomic) id defaultValueWhenKeyIsMissing;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)initWithUserDefaultsKey:(id)a0;
- (char)isSatisfiedForValue:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;

@end
