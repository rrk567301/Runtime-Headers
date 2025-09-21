@class NSArray, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SFLSharePointList : NSObject <SFLList, SPMSharePointManagerObserver, SFLSharePointsSet> {
    id _items;
    unsigned long long _seed;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalObserverLock;
    NSObject<OS_dispatch_group> *_internalInitializeGroup;
}

@property (readonly) id observers;
@property (readonly) id internalSharePointManager;
@property (readonly) unsigned long long seed;
@property (readonly, copy) NSArray *snapshotItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) NSString *identifier;
@property (readonly, copy) NSArray *allItems;
@property (copy) NSDictionary *properties;

- (void).cxx_destruct;
- (unsigned long long)_cfTypeID;
- (id)itemAtIndex:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)removeAllItems;
- (unsigned long long)indexOfItem:(id)a0;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)_fetchItems;
- (void)_notifyObserverListInitialize:(id)a0;
- (void)_notifyObservers;
- (char)addItem:(id)a0 error:(id *)a1;
- (id)allItems;
- (char)containsItem:(id)a0;
- (char)insertItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (char)insertItem:(id)a0 atIndex:(unsigned long long)a1 error:(id *)a2;
- (char)moveItem:(id)a0 afterItem:(id)a1 error:(id *)a2;
- (char)moveItem:(id)a0 toIndex:(unsigned long long)a1 error:(id *)a2;
- (char)removeItem:(id)a0 error:(id *)a1;
- (void)setAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (char)setPropertyValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (void)sharePointsDidChange:(id)a0;
- (char)updateItem:(id)a0 error:(id *)a1;

@end
