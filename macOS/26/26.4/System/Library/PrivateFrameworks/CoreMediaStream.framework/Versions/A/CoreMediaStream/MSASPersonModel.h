@interface MSASPersonModel : MSASModelBase

@property (nonatomic) BOOL shouldDownloadEarliestPhotosFirst;

- (void)purgeCompletionBlock:(id /* block */)a0;
- (void)dbQueueSetErrorCount:(int)a0 forGUID:(id)a1 inQueue:(id)a2;
- (void)setErrorCount:(int)a0 forAssetInDownloadQueue:(id)a1;
- (void)enqueueAssetForDownload:(id)a0 inAlbumWithGUID:(id)a1;
- (id)itemsForUpload;
- (void)dbQueueRemoveGUID:(id)a0 fromQueue:(id)a1;
- (id)initWithPersonID:(id)a0;
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)a0;
- (int)dbQueueAssetCountAlbumGUID:(id)a0 inQueue:(id)a1;
- (void)removeAssetCollectionsFromUploadQueue:(id)a0;
- (long long)countOfEnqueuedCommands;
- (int)assetCollectionsInUploadQueue;
- (long long)countOfEnqueuedCommand:(id)a0;
- (int)itemsForDownloadCountFocusAlbumGUID:(id)a0 focusAssetCollectionGUID:(id)a1;
- (void)dbQueueEnqueueCommand:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4;
- (void)dbQueueRemoveCommandIdentifier:(long long)a0;
- (long long)dbQueueNextCommandSequenceNumber;
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)a0;
- (id)nextItemsForUploadMaxCount:(int)a0;
- (long long)nextMMCSItemID;
- (id)commandAtHeadOfQueueOutParams:(id *)a0 outCommandIdentifier:(long long *)a1 outPersonID:(id *)a2 outAlbumGUID:(id *)a3 outAssetCollectionGUID:(id *)a4;
- (long long)dbQueueSmallestCommandSequenceNumber;
- (void)enqueueCommand:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 pendingOnAssetCollectionGUID:(id)a4;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)a0 focusAssetCollectionGUID:(id)a1 thumbnails:(BOOL)a2 maxCount:(int)a3 isInflight:(BOOL)a4;
- (id)_commandWithMinimumIdentifier:(id)a0 outParams:(id *)a1 outCommandIdentifier:(long long *)a2 outPersonID:(id *)a3 outAlbumGUID:(id *)a4 outAssetCollectionGUID:(id *)a5;
- (void)removeAssetsFromDownloadQueue:(id)a0;
- (void)dbQueueRemoveCommandAtHeadOfQueue;
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt { } *)a0 deleteStatement:(struct sqlite3_stmt { } *)a1;
- (BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)a0;
- (void)enqueueCommand:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)a0 focusAssetCollectionGUID:(id)a1;
- (int)assetsInDownloadQueue;
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)a0;
- (void)setErrorCount:(int)a0 forAssetCollectionInUploadQueue:(id)a1;
- (id)commandWithMinimumIdentifier:(long long)a0 outParams:(id *)a1 outCommandIdentifier:(long long *)a2 outPersonID:(id *)a3 outAlbumGUID:(id *)a4 outAssetCollectionGUID:(id *)a5;
- (int)assetsInDownloadQueueAlbumGUID:(id)a0;
- (void)addPendingAssetCollectionGUID:(id)a0 albumGUID:(id)a1;
- (void)setParams:(id)a0 forCommandWithIdentifier:(long long)a1;
- (void)setInFlightAssets:(id)a0;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)a0 focusAssetCollectionGUID:(id)a1 maxCount:(int)a2;
- (void)requeuePendingAssetCollectionGUID:(id)a0;
- (BOOL)dbQueueIsGUIDQueued:(id)a0 inQueue:(id)a1;
- (void)enqueueAssetCollectionForUpload:(id)a0 album:(id)a1;
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)a0;
- (id)nextItemsForUploadAlbumGUID:(id)a0 maxPriority:(int)a1 maxCount:(int)a2;
- (void)dbQueueRemoveAllEntriesFromTable:(id)a0;
- (void)dbQueueEnqueueCommand:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4 sequenceNumber:(long long)a5;
- (void)enqueueCommandAtHeadOfQueue:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4;
- (void)removeCommandIdentifier:(long long)a0;
- (BOOL)isAssetCollectionWithGUIDPending:(id)a0;

@end
