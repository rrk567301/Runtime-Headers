@class PLAssetContainerListChangeNotification, PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)object;
- (char)shouldReload;
- (id)_changedObjects;
- (char)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (char)countDidChange;
- (id)initWithSortedAlbumList:(id)a0 albumListChangeNotification:(id)a1;

@end
