@interface PPMutableContactDiskCache : PPContactDiskCache

- (BOOL)deleteNameRecordCache;
- (long long)lastCreatedAt;
- (BOOL)deleteCacheIfTooOld;
- (void)setLastCreatedAt:(long long)a0;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;

@end
