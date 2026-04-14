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
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)identifier;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)containers;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)needsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
- (short)albumListType;
- (void)setNeedsReordering;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)canEditAlbums;
- (void).cxx_destruct;
- (void)updateAlbumsOrderIfNeeded;
- (void)_invalidateAllAlbums;
- (void)assetContainerListDidChange:(id)a0;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;

@end
