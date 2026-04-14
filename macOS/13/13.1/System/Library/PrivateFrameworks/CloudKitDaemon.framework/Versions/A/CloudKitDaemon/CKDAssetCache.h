@class CKDDirectoryContext, NSString, NSDate, CKDAssetHandleTable, NSMutableDictionary, CKDAssetVolumeTable, NSMutableSet, CKDMMCS, CKSAssetCacheTableGroup;

@interface CKDAssetCache : NSObject

@property (readonly, nonatomic) CKSAssetCacheTableGroup *assetCacheTableGroup;
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext;
@property BOOL isEvictionScheduled;
@property BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) NSDate *oldestLastUsedTime;
@property (retain, nonatomic) NSMutableSet *deferredDeletedAssetHandles;
@property (retain, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (readonly, nonatomic) BOOL isNewEmptyCache;
@property (readonly, nonatomic) NSString *fileDownloadPath;

+ (id)_sharedCachesQueue;
+ (id)_sharedCachesByDirectory;
+ (id)assetCacheWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 didInit:(BOOL *)a3 error:(id *)a4;
+ (int)openFdForDownloadPath:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drop;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)showAssetCache;
- (id)_initWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;
- (id)mmcsEngineContext;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (id)deviceIDForVolumeIndex:(id)a0;
- (id)volumeIndexForDeviceID:(id)a0;
- (unsigned long long)clearForced:(BOOL)a0;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)a0;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)a0 deleteUnregisteredAssetHandlesWithIDs:(id)a1;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)a0;
- (id)_saveData:(id)a0 error:(id *)a1;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)a0 error:(id *)a1;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)a0 error:(id *)a1;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)a0 error:(id *)a1;
- (id)trackCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)trackDownloadedData:(id)a0 signature:(id)a1 error:(id *)a2;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)a0 block:(id /* block */)a1;
- (id)existingEntriesForRegisterOrPutHandles:(id)a0 volumeIndex:(id)a1;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (BOOL)startTrackingGetAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)deferredStopTrackingAssetHandlesByItemIDs:(id)a0;
- (void)unregisterDeferredItemIDs:(id)a0 andDeleteAssetHandles:(id)a1;
- (void)updateDeferredLastAccessTimeForUUIDs;
- (void)stopTrackingAssetHandlesByItemIDs:(id)a0;
- (id)findAssetHandleForItemID:(unsigned long long)a0 error:(id *)a1;
- (void)deferredUpdateLastTimeUsedForUUID:(id)a0;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUIDString:(id *)a1 assetSignatureString:(id *)a2;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUID:(id *)a1 assetSignature:(id *)a2;
- (id)assetHandleWithCachedPath:(id)a0;
- (void)_scheduleEvictionForDownloadedFiles;
- (unsigned long long)_evictDownloadedFilesWithEvictionInfo:(id)a0;
- (unsigned long long)_evictWithEvictionInfo:(id)a0;
- (unsigned long long)_evictAllFilesForced:(BOOL)a0;
- (unsigned long long)evictAllFilesForced:(BOOL)a0;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)a0;
- (void)_expireAssetHandlesWithExpiryDate:(id)a0;
- (void)expireAssetHandlesIfNecessary;
- (void)_resetAssetInflight;
- (void)setupPersistentStateAtStartup;

@end
