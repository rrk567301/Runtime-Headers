@class NSString, NSDictionary, NSDate, NSNumber, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *lastUsed;
@property (copy, nonatomic) NSString *creatingClass;
@property (copy, nonatomic) NSDictionary *groupData;
@property (retain, nonatomic) NSDate *activityDate;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL didCreateDatabaseTables;

+ (double)expirationTime;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (id)existingTableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (BOOL)supportsGroupCreation;
+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (id)_tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2 create:(BOOL)a3;
+ (BOOL)rebootShouldClearData;
+ (void)groupWillExpire:(id)a0;
+ (void)expireGroup:(id)a0 reason:(id)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)setDb:(id)a0;
- (id)_purge;
- (BOOL)isInvalid;
- (id)finishInitializing:(BOOL)a0;
- (void)invalidateCachedStatements;
- (id)updateGroupData:(id)a0;
- (id)createTables;
- (void)groupWillPurge;
- (void)_deleteTables;
- (void)updateLastUsedDate;
- (id)dbTableNameForLogicalTableName:(id)a0;
- (id)addTable:(id)a0;
- (id)createDBTables;
- (long long)validateTables:(id)a0;
- (id)allTables;
- (id)tableWithName:(id)a0;
- (id)performDataMigration;
- (id)migrateDataFromGroup:(id)a0;
- (id)_lockTables:(id)a0 andPerformBlock:(id /* block */)a1;
- (id)performGroupTransaction:(id /* block */)a0;
- (id)numberValueForKey:(id)a0;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (id)dataValueForKey:(id)a0;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (id)dateValueForKey:(id)a0;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (id)UUIDValueForKey:(id)a0;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)objectValueForKey:(id)a0;
- (void)setObjectValue:(id)a0 forKey:(id)a1;

@end
