@interface _HKMedicalRecordComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;

- (char)_acceptsRecordWithDate:(id)a0;
- (char)_acceptsRecordWithManuallyEnteredIdentifier:(unsigned long long)a0;
- (char)_acceptsRecordWithState:(unsigned long long)a0;
- (char)acceptsDataObject:(id)a0;

@end
