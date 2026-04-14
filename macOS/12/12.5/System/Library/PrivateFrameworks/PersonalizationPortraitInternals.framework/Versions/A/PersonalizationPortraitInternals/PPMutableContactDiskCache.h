@interface PPMutableContactDiskCache : PPContactDiskCache

- (id)_recordSetBucketsForNameRecords:(id)a0;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)deleteNameRecordCache;
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)a0;
- (BOOL)deleteCacheIfTooOld;

@end
