@interface CKDRecordCacheTable : CKSQLiteCacheTable <CKDRecordCaching>

+ (id)dbProperties;
+ (Class)entryClass;

- (id)_dsidForAccount:(id)a0;
- (id)recordsWithIDs:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (id)_recordWithID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (BOOL)_cachedRecordKnownUserKeyData:(id)a0 satisfiesRequiredKeys:(id)a1;
- (void)clearAllRecordsInScope:(long long)a0 container:(id)a1;
- (id)etagForRecordID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (void)willAddToGroup:(id)a0;
- (id)_trimRecord:(id)a0 toRequiredKeys:(id)a1;
- (void)deleteRecordWithID:(id)a0 container:(id)a1 scope:(long long)a2;
- (id)addRecord:(id)a0 container:(id)a1 knownUserKeys:(id)a2 scope:(long long)a3;
- (void)clearAllRecords:(id)a0;
- (id)recordWithID:(id)a0 container:(id)a1 requiredKeys:(id)a2 scope:(long long)a3;
- (void)clearAllRecordsForContainer:(id)a0 zoneWithID:(id)a1;
- (id)init;
- (id)tableForReferenceProperty:(id)a0;
- (id)fetchCacheEntryRecordData:(id)a0;
- (BOOL)_cachedRecordHasValidAssets:(id)a0 forRequiredKeys:(id)a1;
- (unsigned long long)numberOfRecordsWithID:(id)a0 container:(id)a1;

@end
