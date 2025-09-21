@class NSSet, NSMutableDictionary;

@interface PLUpdatedOrderKeys : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
}

@property (readonly) char isObservingOrderKeys;

- (id)init;
- (void).cxx_destruct;
- (char)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;
- (id)_persistentStoresForContext:(id)a0;
- (id)getAndClearUpdatedOrderKeys;
- (void)persistentStoreDidUpdateOrderKeys:(id)a0;
- (char)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)a0;

@end
