@interface _HKListUserDomainConceptComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (char)acceptsDataObject:(id)a0;

@end
