@class PLAssetContainerListChangeNotification, PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (id)insertedObjects;
- (id)deletedObjects;
- (id)object;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (id)insertedIndexes;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (id)deletedIndexes;
- (id)changedObjects;
- (void)dealloc;
- (id)changedIndexes;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)albumList;
- (id)changedIndexesRelativeToSnapshot;
- (id)initWithAggregateAlbumList:(id)a0 fromAlbumListChangeNotification:(id)a1 indexOffset:(unsigned long long)a2;

@end
