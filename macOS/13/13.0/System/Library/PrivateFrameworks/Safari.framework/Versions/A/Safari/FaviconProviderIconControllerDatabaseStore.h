@interface FaviconProviderIconControllerDatabaseStore : WBSSQLiteStore

- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;
- (void)firstIconImageMatchingPageURLStringIn:(id)a0 completionHandler:(id /* block */)a1;
- (id)_fetchIconIDForPageURLString:(id)a0;
- (id)_fetchIconDataForIconID:(id)a0;

@end
