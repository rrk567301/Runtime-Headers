@class NSData, CKSQLiteTOCTable, NSString, CKSQLiteTOCTableGroupTable, NSDate, NSMutableArray, NSMutableSet, NSObject, NSMapTable;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    struct sqlite3 { } *_db;
    struct { struct _opaque_pthread_t *accessThread; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; } _serializer;
    unsigned int _savepointNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    _Atomic int _tableOrGroupCount;
    NSObject<OS_dispatch_group> *_databaseGroup;
    NSDate *_activityCoalesceDate;
}

@property (readonly, nonatomic) NSData *uniquingKey;
@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) CKSQLiteTOCTable *tocTable;
@property (readonly, nonatomic) CKSQLiteTOCTableGroupTable *tableGroupTable;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;

+ (void)initialize;
+ (id)databaseArchiveWithObject:(id)a0;
+ (id)unarchivedObjectFromDatabaseArchive:(id)a0;
+ (void)removeLegacyDatabaseAtPath:(id)a0;
+ (unsigned long long)openDatabaseCount;
+ (id)uniquingKeyForDatabaseDirectory:(id)a0;
+ (id)databaseInDirectory:(id)a0 options:(int)a1 error:(id *)a2;
+ (id)databaseInDirectory:(id)a0 error:(id *)a1;
+ (id)databaseFilePathInDirectory:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)changeCount;
- (void).cxx_destruct;
- (long long)lastInsertRowID;
- (id)executeSQL:(id)a0;
- (void)invalidateCachedStatements;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
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
- (id)sqlErrorWithMessage:(id)a0;
- (id)initWithDatabaseDirectory:(id)a0;
- (void)setupDatabaseConnection;
- (id)openExistingDatabase;
- (id)_validateVersionNumbers;
- (id)_pruneTables;
- (id)validateOpenDatabase;
- (id)bootstrap;
- (id)createNewDatabase;
- (void)closeDatabase;
- (id)removeDatabaseDirectory;
- (void)forceClosedForUnitTest;
- (void)incrementTableOrGroupCount;
- (void)decrementTableOrGroupCount;
- (id)databaseFilePath;
- (id)allTableNames:(id *)a0;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)dropTable:(id)a0;
- (void)assertDbSerialized;
- (void)assertDbNotSerialized;
- (void)serializeDatabase:(id /* block */)a0;
- (void *)serializer;
- (void)assertInTransaction;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)performTOCTransaction:(id /* block */)a0;
- (void)tableGroupPassedValidation:(id)a0;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;

@end
