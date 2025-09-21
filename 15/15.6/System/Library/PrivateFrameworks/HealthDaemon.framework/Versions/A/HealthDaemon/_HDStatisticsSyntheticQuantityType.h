@class HKUnit, HKSampleType;

@interface _HDStatisticsSyntheticQuantityType : HKQuantityType <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) HKSampleType *underlyingSampleType;
@property (readonly, nonatomic) long long overriddenAggregationStyle;
@property (readonly, copy, nonatomic) HKUnit *overriddenCanonicalUnit;
@property (nonatomic) char shouldUseUnderlyingTypeForStatistics;

+ (id)syntheticQuantityTypeWithConfigurationProviding:(id)a0;
+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2;
+ (id)syntheticQuantityTypeWithUnderlyingSampleType:(id)a0 aggregationStyle:(long long)a1 canonicalUnit:(id)a2 shouldUseUnderlyingTypeForStatistics:(char)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)dataObjectClass;
- (long long)aggregationStyle;
- (id)canonicalUnit;

@end
