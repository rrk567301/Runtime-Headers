@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)object;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (id)insertedObjects;
- (id)deletedObjects;
- (id)changedObjects;
- (id)changedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (char)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (char)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (id)changedIndexesRelativeToSnapshot;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
