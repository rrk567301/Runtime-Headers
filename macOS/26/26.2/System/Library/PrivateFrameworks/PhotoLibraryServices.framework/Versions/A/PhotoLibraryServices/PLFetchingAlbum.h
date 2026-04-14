@class NSString, NSOrderedSet, NSData, NSPredicate, NSFetchRequest, NSArray;

@interface PLFetchingAlbum : PLGenericAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {
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

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (id)sortDescriptorsForAlbumKind:(int)a0;
+ (id)predicateForAlbumKind:(int)a0 includeGuest:(BOOL)a1;
+ (id)predicateForAlbumKind:(int)a0;
+ (id)validKindsForPersistence;
+ (id)_predicateForAssetSubtype:(short)a0;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (id)_predicateForVisibleAsset;

- (void)didTurnIntoFault;
- (void)willSave;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)prepareForDeletion;
- (unsigned long long)count;
- (void)didSave;
- (id)mutableAssets;
- (id)payloadForChangedKeys:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)awakeFromFetch;
- (id)assets;
- (id)filteredIndexesForPredicate:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromInsert;
- (BOOL)isValidForPersistence;
- (unsigned long long)approximateCount;
- (BOOL)canPerformDeleteOperation;
- (BOOL)isEmpty;
- (void)setAssets:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (unsigned long long)countForAssetsOfKind:(short)a0;
- (void)batchFetchAssets:(id)a0;
- (id)primitiveAssets;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)a0;
- (id)_performFetchWithRequest:(id)a0;
- (id)fastPointerAccessSetForAssets:(id)a0;
- (BOOL)mayHaveAssetsInCommon:(id)a0;
- (void)setupFetchRequest;
- (void)updateSnapshotAndClearCaches:(id)a0;

@end
