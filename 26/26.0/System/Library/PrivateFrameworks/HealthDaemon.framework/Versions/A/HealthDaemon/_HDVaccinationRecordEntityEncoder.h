@interface _HDVaccinationRecordEntityEncoder : _HDMedicalRecordEntityEncoder

- (id)orderedProperties;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;

@end
