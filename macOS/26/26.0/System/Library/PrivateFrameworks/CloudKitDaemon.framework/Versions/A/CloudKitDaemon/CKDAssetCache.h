@class CKDDirectoryContext, NSString, NSDate, CKDAssetHandleTable, CKDClonedFileCache, CKDAssetCacheTableGroup, CKDAssetVolumeTable, CKDMMCS;

@interface CKDAssetCache : NSObject {
    CKDClonedFileCache *_clonedFileCache;
}

@property (readonly, nonatomic) CKDAssetCacheTableGroup *assetCacheTableGroup;
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext;
@property BOOL isEvictionScheduled;
@property BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) NSDate *oldestLastUsedTime;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (readonly, nonatomic) BOOL isNewEmptyCache;
@property (readonly, nonatomic) NSString *fileDownloadPath;

+ (id)assetCacheWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 didInit:(BOOL *)a3 error:(id *)a4;
+ (id)_sharedCachesQueue;
+ (id)_sharedCachesByDirectory;

- (unsigned long long)countAssetCacheItems;
- (void)clearAssetCache;
- (id)evictAllFilesForced:(BOOL)a0;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (id)clonedFileCache;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (void)dealloc;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)a0;
- (void)stopTrackingAssetHandlesByItemIDs:(id)a0;
- (id)assetHandleWithCachedPath:(id)a0;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUID:(id *)a1 assetSignature:(id *)a2;
- (id)deviceIDForVolumeIndex:(id)a0;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (id)_evictWithEvictionInfo:(id)a0;
- (id)volumeIndexForDeviceID:(id)a0;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)drop;
- (id)registeredMMCSItemForRereferencedAsset:(id)a0 copyBlock:(id /* block */)a1;
- (id)existingEntriesForRegisterOrPutHandles:(id)a0 volumeIndex:(id)a1;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUIDString:(id *)a1 assetSignatureString:(id *)a2;
- (void)_expireAssetHandlesWithExpiryDate:(id)a0;
- (id)_initWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;
- (id)clearForced:(BOOL)a0;
- (BOOL)startTrackingGetAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)a0 deleteUnregisteredAssetHandlesWithIDs:(id)a1;
- (id)_evictAllFilesForced:(BOOL)a0;
- (void)_scheduleEvictionForDownloadedFiles;
- (id)trackDownloadedData:(id)a0 signature:(id)a1 error:(id *)a2;
- (id)findAssetHandleForItemID:(unsigned long long)a0 error:(id *)a1;
- (void)updateLastAccessTimeForUUID:(id)a0;
- (void)_resetAssetInflight;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)a0 block:(id /* block */)a1;
- (void)setupPersistentStateAtStartup;
- (id)mmcsEngineContext;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)a0;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (void)showAssetCacheInContainer:(id)a0;
- (id)_saveData:(id)a0 error:(id *)a1;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)a0 error:(id *)a1;
- (void)expireAssetHandlesIfNecessary;
- (id)trackCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
