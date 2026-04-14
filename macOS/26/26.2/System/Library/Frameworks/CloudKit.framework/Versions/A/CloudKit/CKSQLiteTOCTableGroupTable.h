@class CKSQLiteDatabase;

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCBaseTable {
    CKSQLiteDatabase *_strongDatabase;
}

+ (id)dbProperties;
+ (unsigned long long)dbVersion;
+ (id)logicalTableName;
+ (Class)entryClass;

- (id)db;
- (void)setTableGroup:(id)a0;
- (id)entryWithGroupName:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)updateGroupData:(id)a0;
- (id)updateLastUsedDate:(id)a0;
- (id)expiredTableGroupsWithClass:(id)a0 expirationDate:(id)a1;
- (id)invalidateGroup:(id)a0;
- (id)deletePrimaryKeyValue:(id)a0;
- (id)tableGroupsWithClass:(id)a0;
- (id)makeUniqueGroupName:(id)a0;
- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)insertObject:(id)a0;

@end
