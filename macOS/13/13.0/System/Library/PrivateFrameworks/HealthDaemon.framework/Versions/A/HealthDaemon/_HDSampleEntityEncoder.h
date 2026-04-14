@interface _HDSampleEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)a0 row:(struct HDSQLiteRow { } *)a1 error:(id *)a2;
- (BOOL)applyPropertiesToObject:(id)a0 persistentID:(long long)a1 row:(struct HDSQLiteRow { } *)a2 error:(id *)a3;
- (id)createBareObjectWithRow:(struct HDSQLiteRow { } *)a0;

@end
