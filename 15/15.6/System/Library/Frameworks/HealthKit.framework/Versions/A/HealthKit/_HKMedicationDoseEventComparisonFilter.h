@interface _HKMedicationDoseEventComparisonFilter : _HKComparisonFilter

+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (char)_acceptsMedicationDoseEventWithHashedMedicationIdentifier:(id)a0;
- (char)_acceptsMedicationDoseEventWithLogOrigin:(long long)a0;
- (char)_acceptsMedicationDoseEventWithMedicationIdentifier:(id)a0;
- (char)_acceptsMedicationDoseEventWithMedicationUUID:(id)a0;
- (char)_acceptsMedicationDoseEventWithScheduleItemIdentifier:(id)a0;
- (char)_acceptsMedicationDoseEventWithScheduledDate:(id)a0;
- (char)_acceptsMedicationDoseEventWithStatus:(long long)a0;
- (char)acceptsDataObject:(id)a0;

@end
