@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore

- (id)init;
- (id)_databaseURL;
- (int)_createFreshDatabaseSchema;
- (id)initWithComposedIdentifier:(id)a0 usesInMemoryDatabase:(BOOL)a1;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (int)_currentDatabaseSchemaVersion;
- (int)_resetDatabaseSchema;
- (BOOL)_isDatabaseEmpty;
- (void)getRulesWithCompletionHandler:(id /* block */)a0;
- (void)updateRulesByRemovingIDs:(id)a0 addRules:(id)a1 completionHandler:(id /* block */)a2;
- (void)addRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRules:(id)a0 completionHandler:(id /* block */)a1;
- (id)_insertRule:(id)a0 inDatabase:(id)a1;
- (id)_getRulesWithOutErrorMessage:(id *)a0;

@end
