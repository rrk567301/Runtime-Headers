@class FPItemManager, QLSqliteDatabase, NSString;

@interface QLCacheIndexDatabase : NSObject {
    NSString *_databasePath;
}

@property (readonly) unsigned long long maxThumbnailLifeTime;
@property (readonly) unsigned long long fileEntryCount;
@property (readonly) unsigned long long thumbnailCount;
@property (readonly) QLSqliteDatabase *database;
@property (readonly) unsigned long long reserveBufferCount;
@property (readonly) unsigned long long reserveBufferSize;
@property (retain) FPItemManager *itemManager;

- (void)endTransaction;
- (void)save;
- (void)checkpoint;
- (id)initWithPath:(id)a0;
- (void)_createTables;
- (id)lastCrapWithDate:(id *)a0;
- (BOOL)add:(unsigned long long)a0 blobInfosStartingAtColumn:(unsigned long long)a1 ofSteppedStatement:(struct sqlite3_stmt { } *)a2 toArray:(id)a3;
- (void)do:(id /* block */)a0;
- (id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)a0 whichAreRemaining:(BOOL)a1;
- (BOOL)doesExist;
- (BOOL)itemIsMissingRemoteThumbnail:(id)a0;
- (void)addReservedBufferWithBlobInfo:(id)a0;
- (void)close;
- (id)removeFilesWithFileInfo:(id)a0;
- (id)removeAllThumbnailsForCacheId:(unsigned long long)a0;
- (BOOL)insertOrUpdateImageDataForCacheId:(unsigned long long)a0 size:(float)a1 iconMode:(unsigned char)a2 badgeType:(unsigned long long)a3 iconVariant:(long long)a4 interpolationQuality:(int)a5 bitmapFormat:(id)a6 bitmapDataBlobInfo:(id)a7 metadataBlobInfo:(id)a8 flavor:(int)a9 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10 externalGeneratorDataHash:(unsigned long long)a11 lastHitDate:(id)a12;
- (id)allBuffersIncludingReserved:(BOOL)a0;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)a0;
- (BOOL)beginTransaction;
- (void)removeUbiquitousFilesWithRowids:(id)a0;
- (unsigned long long)_cacheIdForFileIdentifier:(id)a0 createVersion:(id *)a1;
- (id)removeFilesFromUninstalledFileProvidersWithIdentifiers:(id)a0;
- (BOOL)getBlobInfoForCacheId:(unsigned long long)a0 size:(float)a1 iconMode:(unsigned char)a2 badgeType:(unsigned long long)a3 iconVariant:(long long)a4 interpolationQuality:(int)a5 externalGeneratorDataHash:(unsigned long long)a6 bitmapDataBlobInfo:(id *)a7 plistBufferBlobInfo:(id *)a8;
- (id)removeThumbnailForFileIdentifier:(id)a0;
- (id)queryCacheForFileRequests:(id)a0;
- (void)open;
- (void)_deleteAllTables;
- (id)enumeratorForAllUbiquitousFiles:(BOOL)a0 withExtraInfo:(BOOL)a1;
- (id)removeFilesFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (void)removeBasicFilesWithRowids:(id)a0;
- (BOOL)removeReservedBufferWithBlobInfo:(id)a0;
- (id)removeThumbnailsWithCacheIds:(id)a0;
- (void).cxx_destruct;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)a0;
- (id)removePercentageOldestThumbnails:(unsigned long long)a0;
- (unsigned long long)insertOrUpdateThumbnailWithVersionedFileIdentifier:(id)a0 shouldInvalidAllThumbnailSizes:(BOOL *)a1 added:(BOOL *)a2;
- (id)batchOfFileProviderItemsStartingAtRowId:(unsigned long long)a0 endingAtRowId:(unsigned long long *)a1;
- (void)reset;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)a0;
- (void)updateHitCount:(id)a0 forFileIdentifier:(id)a1;
- (id)allReservedBuffers;
- (id)removeThumbnailsOlderThanDate:(id)a0;
- (id)itemsGroupedByProviderDomain:(id)a0;
- (id)batchOfRegularItemsStartingAtRowId:(unsigned long long)a0 endingAtRowId:(unsigned long long *)a1;
- (id)removeThumbnailsForDeletedFiles;
- (unsigned long long)missingRemoteThumbnailsCountForFileProviderIds:(id)a0;
- (BOOL)isValid;
- (void)noteRemoteThumbnailMissingForItems:(id)a0;
- (void)noteRemoteThumbnailPresentForItems:(id)a0;
- (id)_removeThumbnailsFromStatement:(struct sqlite3_stmt { } *)a0;
- (id)removeOldThumbnails;

@end
