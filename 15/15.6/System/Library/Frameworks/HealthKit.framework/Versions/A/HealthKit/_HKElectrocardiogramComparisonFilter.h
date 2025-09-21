@interface _HKElectrocardiogramComparisonFilter : _HKComparisonFilter

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (char)_acceptsECGWithAverageHeartRate:(id)a0;
- (char)_acceptsECGWithPrivateClassification:(unsigned long long)a0;
- (char)_acceptsECGWithPublicClassification:(long long)a0;
- (char)_acceptsECGWithSymptomsStatus:(long long)a0;
- (char)acceptsDataObject:(id)a0;

@end
