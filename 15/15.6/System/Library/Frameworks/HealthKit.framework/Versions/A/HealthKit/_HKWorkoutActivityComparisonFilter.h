@class HKQuantityType;

@interface _HKWorkoutActivityComparisonFilter : _HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)_quantityTypeFromKeyPath:(id)a0 prefix:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (char)requiresSubpredicate;

- (void).cxx_destruct;
- (char)_acceptsActivityWithActivityType:(unsigned long long)a0;
- (char)_acceptsActivityWithDate:(id)a0;
- (char)_acceptsActivityWithDuration:(double)a0;
- (char)_acceptsActivityWithQuantity:(id)a0;
- (char)acceptsDataObject:(id)a0;
- (char)acceptsWorkoutActivity:(id)a0;
- (void)configureInMemoryFilter;

@end
