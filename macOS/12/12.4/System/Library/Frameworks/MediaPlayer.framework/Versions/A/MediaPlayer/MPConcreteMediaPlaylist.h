@class MPMediaQuery, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist <NSCopying> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeAllItems;
- (id)valueForProperty:(id)a0;
- (id)items;
- (unsigned long long)mediaTypes;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)mediaLibrary;
- (BOOL)_allowsEditing;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)addItemWithProductID:(id)a0 completionHandler:(id /* block */)a1;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)existsInLibrary;
- (void)removeFirstItem;
- (id)representativeItem;
- (id)multiverseIdentifier;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)a0;
- (id)valuesForProperties:(id)a0;
- (id)initWithProperties:(id)a0 itemsQuery:(id)a1;
- (id)itemsQuery;
- (void)_updateLibraryForPlaylistEdit:(id)a0;
- (void)appendItems:(id)a0 completion:(id /* block */)a1;
- (void)populateWithSeedItem:(id)a0 queue:(id)a1 completionBlock:(id /* block */)a2;
- (void)replaceItems:(id)a0 completion:(id /* block */)a1;
- (void)replaceItemsWithPersistentIDs:(id)a0 completion:(id /* block */)a1;
- (void)appendItem:(id)a0 completion:(id /* block */)a1;
- (void)removeItems:(id)a0 atFilteredIndexes:(id)a1 completionBlock:(id /* block */)a2;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)populateWithSeedItem:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)a0 error:(id *)a1;
- (id)geniusClusterItemsWithCount:(unsigned long long)a0 error:(id *)a1;
- (void)endGeneratingGeniusClusterItems;

@end
