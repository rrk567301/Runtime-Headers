@class HKUnit, HKSampleType;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSampleType *underlyingSampleType;
@property (readonly, nonatomic) long long overriddenAggregationStyle;
@property (readonly, copy, nonatomic) HKUnit *overriddenCanonicalUnit;
@property (nonatomic) BOOL shouldUseUnderlyingTypeForStatistics;

+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2 shouldUseUnderlyingTypeForStatistics:(BOOL)a3;
+ (id)syntheticQuantityTypeWithConfigurationProviding:(id)a0;
+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2;

- (id)canonicalUnit;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)dataObjectClass;
- (long long)aggregationStyle;
- (void).cxx_destruct;

@end
