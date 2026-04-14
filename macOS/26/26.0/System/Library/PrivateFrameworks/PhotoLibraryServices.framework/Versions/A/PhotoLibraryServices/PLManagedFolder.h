@class NSString, NSOrderedSet;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)localizedRecoveredTitle;
+ (id)entityName;
+ (id)childKeyForOrdering;
+ (id)validKindsForPersistence;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (BOOL)isProcessingOrderKeyCompliance;
+ (void)setIsProcessingOrderKeyCompliance:(BOOL)a0;
+ (id)sortDescriptorsForAlbumsInFolderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1;
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;

- (id)albums;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (void)didSave;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (unsigned long long)photosCount;
- (id)listOfLastModifiedDateChangeProperties;
- (id)identifier;
- (id)mutableAssets;
- (BOOL)isEmpty;
- (BOOL)canPerformDeleteOperation;
- (unsigned long long)count;
- (id)containers;
- (id)childKeyForOrdering;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)needsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
- (short)albumListType;
- (unsigned long long)videosCount;
- (void)setNeedsReordering;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (unsigned long long)assetsCount;
- (BOOL)canEditAlbums;
- (id)assets;
- (void)prepareForDeletion;
- (BOOL)isValidForPersistence;
- (unsigned long long)approximateCount;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)updateAlbumsOrderIfNeeded;
- (void)addChildCollections:(id)a0;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeChildCollections:(id)a0;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (void)addChildCollectionsObject:(id)a0;
- (id)descriptionOfChildCollectionOrderValues;
- (void)enforceFixedOrderKeyComplianceWithOrderKeyManager:(id)a0;
- (void)insertObject:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (void)removeChildCollectionsObject:(id)a0;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
