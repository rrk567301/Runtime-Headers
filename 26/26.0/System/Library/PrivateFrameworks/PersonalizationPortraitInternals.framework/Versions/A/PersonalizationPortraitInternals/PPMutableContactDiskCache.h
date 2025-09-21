@interface PPMutableContactDiskCache : PPContactDiskCache

- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)a0;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteCacheIfTooOld;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (BOOL)deleteNameRecordCache;

@end
