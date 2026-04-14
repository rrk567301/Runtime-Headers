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

+ (id)entityName;
+ (id)childKeyForOrdering;
+ (id)localizedRecoveredTitle;
+ (id)validKindsForPersistence;
+ (BOOL)isProcessingOrderKeyCompliance;
+ (void)setIsProcessingOrderKeyCompliance:(BOOL)a0;
+ (id)sortDescriptorsForAlbumsInFolderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1;
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;

- (void)willSave;
- (id)albums;
- (void)didSave;
- (void)setNeedsReordering;
- (id)containers;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)canEditAlbums;
- (unsigned long long)assetsCount;
- (unsigned long long)approximateCount;
- (id)childKeyForOrdering;
- (id)assets;
- (void)updateAlbumsOrderIfNeeded;
- (unsigned long long)videosCount;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (id)identifier;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (id)mutableAssets;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)canEditContainers;
- (BOOL)isValidForPersistence;
- (id)listOfLastModifiedDateChangeProperties;
- (unsigned long long)count;
- (short)albumListType;
- (BOOL)isEmpty;
- (void)prepareForDeletion;
- (id)containersRelationshipName;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)canPerformDeleteOperation;
- (unsigned long long)photosCount;
- (BOOL)needsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
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
