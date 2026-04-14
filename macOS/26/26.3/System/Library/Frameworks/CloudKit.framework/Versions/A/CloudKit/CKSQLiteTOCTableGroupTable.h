@class CKSQLiteDatabase;

@interface CKSQLiteTOCTableGroupTable : CKSQLiteTOCBaseTable {
    CKSQLiteDatabase *_strongDatabase;
}

+ (id)logicalTableName;
+ (Class)entryClass;
+ (id)dbProperties;
+ (unsigned long long)dbVersion;

- (id)entryWithGroupName:(id)a0 error:(id *)a1;
- (id)db;
- (id)makeUniqueGroupName:(id)a0;
- (BOOL)migrateEntryDataFromTable:(id)a0 entry:(id)a1 toEntry:(id)a2 addedProperties:(id)a3;
- (id)deletePrimaryKeyValue:(id)a0;
- (id)invalidateGroup:(id)a0;
- (id)updateGroupData:(id)a0;
- (void).cxx_destruct;
- (id)tableGroupsWithClass:(id)a0;
- (void)setTableGroup:(id)a0;
- (id)insertObject:(id)a0;
- (id)updateLastUsedDate:(id)a0;
- (id)expiredTableGroupsWithClass:(id)a0 expirationDate:(id)a1;

@end
