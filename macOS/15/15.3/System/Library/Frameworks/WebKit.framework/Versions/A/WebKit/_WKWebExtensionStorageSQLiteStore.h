@interface _WKWebExtensionStorageSQLiteStore : _WKWebExtensionSQLiteStore {
    unsigned char _storageType;
}

- (id)_databaseURL;
- (void)setKeyedData:(id)a0 completionHandler:(id /* block */)a1;
- (int)_createFreshDatabaseSchema;
- (int)_currentDatabaseSchemaVersion;
- (id)_getAllKeysReturningErrorMessage:(id *)a0;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (id)_getValuesForAllKeysReturningErrorMessage:(id *)a0;
- (id)_getValuesForKeys:(id)a0 outErrorMessage:(id *)a1;
- (id)_insertOrUpdateValue:(id)a0 forKey:(id)a1 inDatabase:(id)a2;
- (BOOL)_isDatabaseEmpty;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_resetDatabaseSchema;
- (void)deleteValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStorageSizeForAllKeysIncludingKeyedData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getStorageSizeForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUniqueIdentifier:(id)a0 storageType:(unsigned char)a1 directory:(id)a2 usesInMemoryDatabase:(BOOL)a3;

@end
