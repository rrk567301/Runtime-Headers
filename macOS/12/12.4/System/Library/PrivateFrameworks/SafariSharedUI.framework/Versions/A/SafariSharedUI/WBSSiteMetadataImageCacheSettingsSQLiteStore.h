@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (id)allEntries;
- (void)_closeDatabase;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (id)initWithDatabaseURL:(id)a0 protectionType:(long long)a1;
- (BOOL)_openDatabase:(id)a0 andCheckIntegrity:(BOOL)a1;
- (BOOL)_migrateToCurrentSchemaVersionifNeeded;
- (BOOL)_checkDatabaseIntegrity;
- (BOOL)_createNewDatabaseSchema;
- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (BOOL)_performMigrationStepToSchemaVersion:(long long)a0 withStatements:(id)a1;
- (id)_createNewDatabaseSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_updateEntry:(id)a0;
- (id)_insertEntry:(id)a0;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)entryWithHost:(id)a0;
- (id)saveEntry:(id)a0;
- (BOOL)deleteEntryWithHost:(id)a0;
- (BOOL)deleteAllEntries;

@end
