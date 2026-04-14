@class GEOURLCollectionStorage;

@interface MKCollectionStorageRefiner : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    GEOURLCollectionStorage *_collectionStorage;
}

- (void).cxx_destruct;
- (id)initWithCollectionURL:(id)a0;
- (id)initWithCollectionStorage:(id)a0;
- (void)_sharedInitWithCollectionStorage:(id)a0;
- (void)fetchMapItems:(id /* block */)a0;
- (void)fetchMapItems:(id /* block */)a0 traits:(id)a1;

@end
