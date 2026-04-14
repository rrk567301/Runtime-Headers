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
@property (readonly, nonatomic) int options;

+ (void)initialize;
+ (id)databaseArchiveWithObject:(id)a0;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (id)databaseInDirectory:(id)a0 error:(id *)a1;
+ (id)databaseInDirectory:(id)a0 options:(int)a1 error:(id *)a2;
+ (unsigned long long)openDatabaseCount;
+ (void)removeLegacyDatabaseAtPath:(id)a0;
+ (id)unarchivedObjectFromDatabaseArchive:(id)a0;
+ (id)uniquingKeyForDatabaseDirectory:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (long long)lastInsertRowID;
- (id)executeSQL:(id)a0;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)UUIDValueForKey:(id)a0;
- (id)_pruneTables;
- (id)_validateVersionNumbers;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (id)allTableNames:(id *)a0;
- (void)assertDbNotSerialized;
- (void)assertDbSerialized;
- (void)assertInTransaction;
- (id)bootstrap;
- (void)closeDatabase;
- (id)createNewDatabase;
- (id)dataValueForKey:(id)a0;
- (id)databaseFilePath;
- (id)dateValueForKey:(id)a0;
- (void)decrementTableOrGroupCount;
- (id)dropTable:(id)a0;
- (void)forceClosedForUnitTest;
- (void)incrementTableOrGroupCount;
- (id)initWithDatabaseDirectory:(id)a0 options:(int)a1;
- (void)invalidateCachedStatements;
- (id)numberValueForKey:(id)a0;
- (id)objectValueForKey:(id)a0;
- (id)openExistingDatabase;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)performTOCTransaction:(id /* block */)a0;
- (id)removeDatabaseDirectory;
- (void)removeValidatedTableGroup:(id)a0;
- (void)serializeDatabase:(id /* block */)a0;
- (void *)serializer;
- (void)setDataValue:(id)a0 forKey:(id)a1;
- (void)setDateValue:(id)a0 forKey:(id)a1;
- (void)setNumberValue:(id)a0 forKey:(id)a1;
- (void)setObjectValue:(id)a0 forKey:(id)a1;
- (void)setStringValue:(id)a0 forKey:(id)a1;
- (void)setUUIDValue:(id)a0 forKey:(id)a1;
- (void)setupDatabaseConnection;
- (id)sqlErrorWithMessage:(id)a0;
- (id)stringValueForKey:(id)a0;
- (void)tableGroupPassedValidation:(id)a0;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;
- (id)validateOpenDatabase;

@end
