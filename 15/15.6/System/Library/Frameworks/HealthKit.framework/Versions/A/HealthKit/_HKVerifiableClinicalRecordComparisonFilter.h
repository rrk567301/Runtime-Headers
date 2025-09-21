@interface _HKVerifiableClinicalRecordComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;

- (char)_acceptsSampleWithDate:(id)a0;
- (char)acceptsDataObject:(id)a0;

@end
