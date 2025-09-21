@interface _HKDiagnosticTestResultComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isSupportedKeyPath:(id)a0;

- (char)_acceptsDiagnosticTestResultWithCategory:(id)a0;
- (char)_acceptsDiagnosticTestResultWithReferenceRangeStatus:(long long)a0;
- (char)acceptsDataObject:(id)a0;

@end
