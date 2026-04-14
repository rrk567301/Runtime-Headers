@interface WBSLPLinkMetadataSQLiteStore : WBSSQLiteStore

- (int)_createFreshDatabaseSchema;
- (id)_fetchMetadataInfoForURLString:(id)a0;
- (BOOL)_deleteAllMetadataInfo;
- (id)_deleteMetadataInfoForURLString:(id)a0 uuid:(id)a1;
- (void)_deleteMetadataInfoWithUUID:(id)a0;
- (id)_deleteUUIDWithOldestTimestamp;
- (id)_setTimestampToNowForUUID:(id)a0;
- (id)_setUUID:(id)a0 forURLString:(id)a1;
- (unsigned long long)_uuidCount;
- (void)linkAndUpdateTimestampForMetadataWithURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)linkURLString:(id)a0 withUUIDForURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)metadataInfoForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)performLRUEvictionIfNecessaryWithMaximumNumberOfEntries:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)removeAllMetadataInfoWithCompletionHandler:(id /* block */)a0;
- (void)removeAllMetadataInfoWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeMetadataInfoForURLString:(id)a0 completionHandler:(id /* block */)a1;

@end
