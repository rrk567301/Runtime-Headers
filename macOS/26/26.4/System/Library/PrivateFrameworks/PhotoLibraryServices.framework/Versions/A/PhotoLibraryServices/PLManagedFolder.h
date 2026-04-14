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

+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (id)entityName;
+ (id)sortDescriptorsForAlbumsInFolderWithSortKey:(unsigned int)a0 ascending:(BOOL)a1;
+ (BOOL)isProcessingOrderKeyCompliance;
+ (id)validKindsForPersistence;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)localizedRecoveredTitle;
+ (void)setIsProcessingOrderKeyCompliance:(BOOL)a0;
+ (id)childKeyForOrdering;

- (id)containers;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)didSave;
- (id)containersRelationshipName;
- (id)albums;
- (void)willSave;
- (BOOL)canEditContainers;
- (void)prepareForDeletion;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)canEditAlbums;
- (BOOL)isEmpty;
- (BOOL)needsReordering;
- (short)albumListType;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (BOOL)canPerformDeleteOperation;
- (BOOL)isValidForPersistence;
- (unsigned long long)photosCount;
- (unsigned long long)count;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)albumHasFixedOrder:(id)a0;
- (id)childKeyForOrdering;
- (id)assets;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (unsigned long long)videosCount;
- (unsigned long long)approximateCount;
- (id)mutableAssets;
- (id)identifier;
- (id)listOfLastModifiedDateChangeProperties;
- (unsigned long long)assetsCount;
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
