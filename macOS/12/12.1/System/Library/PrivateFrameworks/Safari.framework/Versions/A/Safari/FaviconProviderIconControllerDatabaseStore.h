@interface FaviconProviderIconControllerDatabaseStore : WBSSQLiteStore

- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;
- (id)_fetchIconIDForPageURLString:(id)a0;
- (id)_fetchIconDataForIconID:(id)a0;
- (void)firstIconImageMatchingPageURLStringIn:(id)a0 completionHandler:(id /* block */)a1;

@end
