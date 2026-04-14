@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;

- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (id)_createNewDatabaseSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (id)_deleteAllEntriesSQLiteStatement;

@end
