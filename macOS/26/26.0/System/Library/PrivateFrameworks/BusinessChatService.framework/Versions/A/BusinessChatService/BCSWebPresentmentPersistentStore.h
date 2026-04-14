@interface BCSWebPresentmentPersistentStore : BCSPersistentStore <BCSItemCaching> {
    long long _schemaVersion;
}

+ (const char *)debugQueueName;

- (const char *)schema;
- (long long)schemaVersion;
- (id)databasePath;
- (id)init;
- (id)_metadataMatching:(id)a0;
- (id)_permissionsMatching:(id)a0;
- (void)_updateMetadataItem:(id)a0 withItemIdentifier:(id)a1;
- (void)_updatePermissionsItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)deleteItemMatching:(id)a0;
- (void)deleteItemsOfType:(long long)a0;
- (id)initWithSchemaVersion:(long long)a0;
- (id)itemMatching:(id)a0;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;

@end
