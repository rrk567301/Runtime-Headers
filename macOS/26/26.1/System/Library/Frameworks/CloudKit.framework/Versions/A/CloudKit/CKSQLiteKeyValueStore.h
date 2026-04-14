@interface CKSQLiteKeyValueStore : CKSQLiteTable <CKSQLiteKeyValueStorage>

+ (id)defaultLogicalTableName;
+ (Class)entryClass;
+ (id)dbProperties;

- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0 error:(id *)a1;

@end
