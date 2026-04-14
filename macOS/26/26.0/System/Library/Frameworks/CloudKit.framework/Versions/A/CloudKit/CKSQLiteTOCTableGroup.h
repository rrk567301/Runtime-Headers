@interface CKSQLiteTOCTableGroup : CKSQLiteTableGroup

+ (id)groupName;
+ (double)expirationTime;
+ (unsigned long long)dbVersion;
+ (id)TOCTableGroupInDatabase:(id)a0 options:(unsigned long long)a1;
+ (id)TOCTableGroupInDatabase:(id)a0;
+ (id)createNewTOCInDatabase:(id)a0;
+ (id)createTOCInDatabase:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)migrationTOCInDatabase:(id)a0 error:(id *)a1;
+ (id)genericTOCTableGroupInDatabase:(id)a0 error:(id *)a1;

- (id)resetValidation;
- (id)tocTableGroup;
- (BOOL)needsMigration:(id *)a0;
- (BOOL)_canMigrateWithMissingTable:(id)a0;
- (id)_tableClasses;
- (id)_tablesByNameInitializer;
- (id)addTOCEntriesForTOCTableGroup:(id)a0;
- (void)databaseValidationSuccess;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (BOOL)isMigrationTOC;
- (id)isUseable;
- (id)migrateDataFromGroup:(id)a0;
- (id)prepareNewlyOpenedDatabase;
- (void)removeDeletedGroups;
- (id)setLastUsedEpoch:(long long)a0;
- (id)tocImageInfoTable;
- (id)tocTable;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;

@end
