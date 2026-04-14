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
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, nonatomic) BOOL hasAssetsCache;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicateForAlbumKind:(int)a0 includeGuest:(BOOL)a1;
+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)validKindsForPersistence;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (id)_predicateForAssetSubtype:(short)a0;
+ (id)_predicateForVisibleAsset;
+ (id)predicateForAlbumKind:(int)a0;

- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)approximateCount;
- (BOOL)isEmpty;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (void)didTurnIntoFault;
- (id)assets;
- (void)setAssets:(id)a0;
- (BOOL)isValidForPersistence;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)setKeyAsset:(id)a0;
- (BOOL)canPerformDeleteOperation;
- (id)keyAsset;
- (id)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(id)a0;
- (id)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(id)a0;
- (void)batchFetchAssets:(id)a0;
- (id)filteredIndexesForPredicate:(id)a0;
- (id)mutableAssets;
- (id)payloadForChangedKeys:(id)a0;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)setupFetchRequest;
- (id)primitiveAssets;
- (id)_performFetchWithRequest:(id)a0;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (id)_cachedKeyAssets;
- (void)updateSnapshotAndClearCaches:(id)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;

@end
