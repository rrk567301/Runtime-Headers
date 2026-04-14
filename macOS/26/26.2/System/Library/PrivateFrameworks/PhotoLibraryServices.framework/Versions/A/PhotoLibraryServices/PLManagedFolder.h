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
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)sortDescriptorsForAlbumsInFolderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1;
+ (BOOL)isProcessingOrderKeyCompliance;
+ (id)childKeyForOrdering;
+ (id)localizedRecoveredTitle;
+ (id)validKindsForPersistence;
+ (void)setIsProcessingOrderKeyCompliance:(BOOL)a0;

- (void)willSave;
- (unsigned long long)assetsCount;
- (id)identifier;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (short)albumListType;
- (void)prepareForDeletion;
- (unsigned long long)videosCount;
- (unsigned long long)count;
- (void)didSave;
- (id)mutableAssets;
- (id)albums;
- (id)payloadForChangedKeys:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (BOOL)needsReordering;
- (id)assets;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (id)containers;
- (id)listOfLastModifiedDateChangeProperties;
- (unsigned long long)photosCount;
- (BOOL)hasAtLeastOneAlbum;
- (id)childKeyForOrdering;
- (id)containersRelationshipName;
- (BOOL)canEditAlbums;
- (BOOL)isValidForPersistence;
- (unsigned long long)approximateCount;
- (BOOL)canPerformDeleteOperation;
- (BOOL)isEmpty;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)canEditContainers;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)albumHasFixedOrder:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)setNeedsReordering;
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
