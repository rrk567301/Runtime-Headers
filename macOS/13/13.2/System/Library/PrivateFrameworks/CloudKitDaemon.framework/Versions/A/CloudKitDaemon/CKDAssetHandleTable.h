@interface CKDAssetHandleTable : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (id)saveStatus:(id)a0;
- (BOOL)assetHandleExistsInDatabase:(id)a0;
- (id)assetHandleWithUUID:(id)a0;
- (id)saveOrInsert:(id)a0;
- (id)saveChunkCount:(id)a0;
- (id)saveLastUsedTime:(id)a0;
- (id)oldestLastUsedTime;
- (id)saveStatusAndChunkCount:(id)a0;
- (id)selectProperties:(id)a0 inAssetHandlesWithStatus:(long long)a1 error:(id *)a2;
- (id)interruptedAssetWithSignature:(id)a0 error:(id *)a1;

@end
