@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (id)deletedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (id)object;
- (BOOL)shouldReload;
- (void)dealloc;
- (id)changedIndexes;
- (id)changedObjects;
- (id)deletedObjects;
- (void).cxx_destruct;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (id)insertedObjects;
- (id)insertedIndexes;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (id)changedIndexesRelativeToSnapshot;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
