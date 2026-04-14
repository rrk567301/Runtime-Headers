@class CKSQLiteTOCTableGroup, CKSQLiteDatabaseManager, NSDictionary, NSObject, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : CKSQLiteTableGroupEntry {
    NSDictionary *_tablesByName;
    CKSQLiteDatabaseManager *_databaseManager;
}

@property (readonly, nonatomic) CKSQLiteTOCTableGroup *tocTableGroup;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL isNew;
@property (readonly, nonatomic) BOOL isFirstInstanceInProcess;
@property (readonly, nonatomic) BOOL isFirstInstanceSinceBoot;
@property (readonly, nonatomic) unsigned long long options;
@property (retain, nonatomic) CKSQLiteDatabase *activityPersistenceDatabase;

+ (BOOL)rebootShouldClearData;
+ (void)enumerateGroupEntriesInDatabase:(id)a0 block:(id /* block */)a1;
+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (void)expireGroup:(id)a0 reason:(id)a1 database:(id)a2;
+ (id)groupEntryInDatabase:(id)a0 withGroupName:(id)a1 error:(id *)a2;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)groupWillExpire:(id)a0;
+ (id)lookupTableGroupInstanceInCache:(id)a0 withName:(id)a1 options:(unsigned long long)a2;
+ (id)performTableGroupValidationInDatabase:(id)a0;
+ (id)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (BOOL)shouldMigrateData;
+ (id)tableGroupInDatabase:(id)a0 withID:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)tableGroupWithEntry:(id)a0 database:(id)a1 options:(unsigned long long)a2;

- (id)performValidation;
- (void)dealloc;
- (id)setFlag:(unsigned long long)a0;
- (id)performTransaction:(id /* block */)a0;
- (id)updateGroupData:(id)a0;
- (id)init;
- (id)databaseManager:(id *)a0;
- (void)serialize:(id /* block */)a0;
- (void)createTables;
- (void).cxx_destruct;
- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (void)_setupActivityEntry:(id)a0;
- (id)_tablesByNameInitializer;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)a0;
- (void)addTable:(id)a0;
- (id)allTables;
- (id)clearFlag:(unsigned long long)a0;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)finishInitializing;
- (BOOL)hasFlag:(unsigned long long)a0;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (id)migrateDataFromGroup:(id)a0;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)performDataMigration;
- (id)performInTransaction:(id /* block */)a0;
- (id)prepareExistingTables:(id /* block */)a0;
- (id)prepareNewTables;
- (id)prepareTables;
- (id)requestCallbackForTarget:(id)a0 withDate:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (id)requestCallbackWithDate:(id)a0 coalescingInterval:(double)a1 minimumSeparation:(double)a2;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (void)setLogOperations:(BOOL)a0;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0 error:(id *)a1;
- (id)tableWithName:(id)a0;
- (id)tocTable;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;
- (void)updateLastUsedDate;
- (id)validateGroup:(id)a0 matches:(id)a1;
- (id)validateTable:(id)a0 matchesTOCEntry:(id)a1;
- (id)validateTablesMatchesTOCEntries:(id)a0;

@end
