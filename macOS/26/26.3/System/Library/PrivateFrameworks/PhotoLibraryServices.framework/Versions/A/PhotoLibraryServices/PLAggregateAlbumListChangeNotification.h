@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (id)object;
- (id)insertedObjects;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (id)insertedIndexes;
- (void).cxx_destruct;
- (id)deletedObjects;
- (id)changedIndexes;
- (id)changedObjects;
- (void)dealloc;
- (id)deletedIndexes;
- (BOOL)shouldReload;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (id)changedIndexesRelativeToSnapshot;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
