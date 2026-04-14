@interface TabSnapshotOnDiskImageStorageMetadataStore : WBSSQLiteStore

- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;
- (int)_migrateToSchemaVersion:(int)a0;
- (void)createOrUpdateTabSnapshotMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)tabSnapshotMetadataForTabsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)tabSnapshotMetadataForTabsWithOriginURLs:(id)a0 useExactMatching:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)tabSnapshotMetadataForTabsCreatedOnOrAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteTabSnapshotMetadataForTabsWithIdentifiers:(id)a0 completionHandler:(id /* block */)a1;

@end
