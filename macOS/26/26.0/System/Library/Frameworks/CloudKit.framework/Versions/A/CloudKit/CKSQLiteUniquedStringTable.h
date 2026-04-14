@interface CKSQLiteUniquedStringTable : CKSQLiteUniquedObjectTable

+ (id)defaultLogicalTableName;
+ (Class)entryClass;
+ (id)dbProperties;

- (id)entryForReferent:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;
- (id)referentForEntry:(id)a0 error:(id *)a1;

@end
