@interface _HKVerifiableClinicalRecordComparisonFilter : _HKComparisonFilter

+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (BOOL)_acceptsSampleWithDate:(id)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
