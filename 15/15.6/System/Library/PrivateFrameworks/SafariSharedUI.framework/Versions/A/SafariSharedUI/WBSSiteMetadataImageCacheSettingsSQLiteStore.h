@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    char _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)initWithDatabaseURL:(id)a0;
- (id)allEntries;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)_closeDatabase;
- (void)performMaintenanceWork;
- (char)_checkDatabaseIntegrity;
- (void)_checkpointWriteAheadLogOnInternalQueue;
- (id)_createNewDatabaseSQLiteStatement;
- (char)_createNewDatabaseSchema;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (id)_insertEntry:(id)a0;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (char)_migrateToCurrentSchemaVersionifNeeded;
- (char)_openDatabase:(id)a0 andCheckIntegrity:(char)a1;
- (char)_performMigrationStepToSchemaVersion:(long long)a0 withStatements:(id)a1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (id)_updateEntry:(id)a0;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;
- (char)deleteAllEntries;
- (char)deleteEntryWithHost:(id)a0;
- (id)entryWithHost:(id)a0;
- (id)initWithDatabaseURL:(id)a0 protectionType:(long long)a1;
- (id)saveEntry:(id)a0;

@end
