@class NSString, NSOrderedSet, NSData, NSPredicate, NSFetchRequest, NSArray;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {
    unsigned long long _countForDisplay;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    int _emptyState;
    NSArray *_cachedKeyAssets;
}

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSOrderedSet *fetchedAssets;
@property (nonatomic) BOOL needsPersistenceUpdate;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSData *customQueryParameters;
@property (retain, nonatomic) NSString *customQueryType;
@property (readonly, nonatomic) NSPredicate *extraFilterPredicate;
@property (retain, nonatomic) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (id)predicateForAlbumKind:(int)a0 includeGuest:(BOOL)a1;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)validKindsForPersistence;
+ (id)predicateForAlbumKind:(int)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (id)_predicateForAssetSubtype:(short)a0;
+ (id)_predicateForVisibleAsset;

- (unsigned long long)count;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)approximateCount;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)awakeFromFetch;
- (void)willSave;
- (void)didSave;
- (void)didTurnIntoFault;
- (id)assets;
- (void)setAssets:(id)a0;
- (void)setKeyAsset:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (id)keyAsset;
- (BOOL)canPerformDeleteOperation;
- (id)mutableAssets;
- (id)filteredIndexesForPredicate:(id)a0;
- (void)batchFetchAssets:(id)a0;
- (id)secondaryKeyAsset;
- (id)tertiaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)a0;
- (void)setTertiaryKeyAsset:(id)a0;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isValidForPersistence;
- (id)primitiveAssets;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)updateSnapshotAndClearCaches:(id)a0;
- (id)_cachedKeyAssets;
- (void)setupFetchRequest;
- (id)_performFetchWithRequest:(id)a0;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;

@end
