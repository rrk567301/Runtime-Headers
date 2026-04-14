@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
}

@property (nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumListWithFilter:(int)a0 inPhotoLibrary:(id)a1;

- (id)albums;
- (void)setNeedsReordering;
- (id)containers;
- (BOOL)canEditAlbums;
- (id)managedObjectContext;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (id)identifier;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canEditContainers;
- (short)albumListType;
- (BOOL)isEmpty;
- (id)containersRelationshipName;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)hasAtLeastOneAlbum;
- (id)photoLibrary;
- (BOOL)needsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)_invalidateAllAlbums;
- (void)assetContainerListDidChange:(id)a0;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;

@end
