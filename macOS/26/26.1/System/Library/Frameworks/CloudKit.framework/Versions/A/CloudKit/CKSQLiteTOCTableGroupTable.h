@class CKSQLiteDatabase;

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCBaseTable {
    CKSQLiteDatabase *_strongDatabase;
}

+ (Class)entryClass;
+ (id)logicalTableName;
+ (id)dbProperties;
+ (unsigned long long)dbVersion;

- (id)deletePrimaryKeyValue:(id)a0;
- (id)entryWithGroupName:(id)a0 error:(id *)a1;
- (id)insertObject:(id)a0;
- (void)setTableGroup:(id)a0;
- (id)tableGroupsWithClass:(id)a0;
- (id)expiredTableGroupsWithClass:(id)a0 expirationDate:(id)a1;
- (id)makeUniqueGroupName:(id)a0;
- (id)updateLastUsedDate:(id)a0;
- (id)updateGroupData:(id)a0;
- (id)invalidateGroup:(id)a0;
- (void).cxx_destruct;
- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)db;

@end
