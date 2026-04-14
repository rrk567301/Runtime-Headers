@interface CKSQLiteTOCTable : CKSQLiteTOCBaseTable

+ (unsigned long long)dbVersion;
+ (Class)entryClass;
+ (id)logicalTableName;
+ (id)dbProperties;

- (id)tocEntryWithGroupID:(id)a0 logicalTableName:(id)a1 error:(id *)a2;
- (id)tocEntriesWithGroupID:(id)a0 error:(id *)a1;
- (id)addEntryForTable:(id)a0;
- (id)_tocEntriesWithGroupID:(id)a0 error:(id *)a1 label:(struct _CKSQLiteCompiledStatementLabel { char *x0; char *x1; int x2; } *)a2 properties:(id)a3;
- (id)validationTocEntriesWithGroupID:(id)a0 error:(id *)a1;
- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)setSchema:(id)a0 forTable:(id)a1;

@end
