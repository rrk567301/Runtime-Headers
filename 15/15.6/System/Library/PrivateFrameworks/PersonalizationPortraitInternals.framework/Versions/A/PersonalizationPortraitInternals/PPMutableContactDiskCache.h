@interface PPMutableContactDiskCache : PPContactDiskCache

- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (char)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (char)addNameRecords:(id)a0 error:(id *)a1;
- (char)deleteCacheIfTooOld;
- (char)deleteNameRecordCache;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)a0;
- (char)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;

@end
