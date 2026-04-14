@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore

- (id)init;
- (id)_databaseURL;
- (int)_createFreshDatabaseSchema;
- (id)initWithComposedIdentifier:(id)a0 usesInMemoryDatabase:(BOOL)a1;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (int)_currentDatabaseSchemaVersion;
- (int)_resetDatabaseSchema;
- (BOOL)_isDatabaseEmpty;
- (void)updateRulesByRemovingIDs:(id)a0 addRules:(id)a1 completionHandler:(id /* block */)a2;
- (void)addRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRulesWithCompletionHandler:(id /* block */)a0;
- (id)_getRulesWithOutErrorMessage:(id *)a0;
- (id)_insertRule:(id)a0 inDatabase:(id)a1;

@end
