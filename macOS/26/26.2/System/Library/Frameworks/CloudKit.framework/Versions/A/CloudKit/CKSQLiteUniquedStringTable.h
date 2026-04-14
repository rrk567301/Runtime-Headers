@interface CKSQLiteUniquedStringTable : CKSQLiteUniquedObjectTable

+ (id)dbProperties;
+ (Class)entryClass;
+ (id)defaultLogicalTableName;

- (id)entryForReferent:(id)a0;
- (id)fetchPrimaryKeyForEntry:(id)a0;
- (id)referentForEntry:(id)a0 error:(id *)a1;

@end
