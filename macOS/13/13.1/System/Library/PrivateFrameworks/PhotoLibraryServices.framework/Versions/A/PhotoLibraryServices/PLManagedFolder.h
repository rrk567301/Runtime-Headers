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
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
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
+ (id)validKindsForPersistence;
+ (id)childKeyForOrdering;
+ (id)localizedRecoveredTitle;

- (unsigned long long)count;
- (unsigned long long)approximateCount;
- (id)identifier;
- (BOOL)isEmpty;
- (id)containers;
- (void)prepareForDeletion;
- (void)willSave;
- (void)didSave;
- (id)assets;
- (unsigned long long)photosCount;
- (id)albums;
- (BOOL)isValidForPersistence;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (unsigned long long)videosCount;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)addChildCollections:(id)a0;
- (void)removeChildCollections:(id)a0;
- (unsigned long long)assetsCount;
- (BOOL)canPerformDeleteOperation;
- (id)mutableAssets;
- (id)payloadForChangedKeys:(id)a0;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (id)childKeyForOrdering;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (BOOL)hasAtLeastOneAlbum;
- (short)albumListType;
- (BOOL)canEditAlbums;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)setNeedsReordering;
- (BOOL)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)_enforceFixedOrderKeyCompliance;
- (void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)insertObject:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addChildCollectionsObject:(id)a0;
- (void)removeChildCollectionsObject:(id)a0;
- (id)descriptionOfChildCollectionOrderValues;

@end
