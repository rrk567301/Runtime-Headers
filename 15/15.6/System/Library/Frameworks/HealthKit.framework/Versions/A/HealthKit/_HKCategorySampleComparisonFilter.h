@interface _HKCategorySampleComparisonFilter : _HKComparisonFilter

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)isSupportedKeyPath:(id)a0;

- (char)acceptsDataObject:(id)a0;

@end
