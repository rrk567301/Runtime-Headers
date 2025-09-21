@class NSString, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSURL *_storeURL;
    NSMutableDictionary *_state;
    BOOL _dirty;
    unsigned long long _batchCount;
    int _autoFlushDuration;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (weak, nonatomic) id<FBApplicationDataStoreRepositoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_load;
- (id)objectForKey:(id)a0 forApplication:(id)a1;
- (id)migrateIdentifier:(id)a0 toIdentifier:(id)a1;
- (BOOL)isDirty;
- (void)endBatchedUpdate;
- (void)dealloc;
- (id)allObjectsForKeys:(id)a0;
- (void)flushSynchronously;
- (BOOL)_isEligibleForSaving:(id)a0;
- (void)removeAllObjectsForApplication:(id)a0;
- (void)beginBatchedUpdate;
- (id)initWithStorePath:(id)a0;
- (id)keysForApplication:(id)a0;
- (void)removeObjectForKey:(id)a0 forApplication:(id)a1;
- (void)removeObjectsForKeys:(id)a0 forApplication:(id)a1;
- (id)applicationIdentifiersWithState;
- (void)setObject:(id)a0 forKey:(id)a1 forApplication:(id)a2;
- (id)location;
- (void)close;
- (void).cxx_destruct;
- (BOOL)containsKey:(id)a0 forApplication:(id)a1;
- (id)_stateQueue_storeForIdentifier:(id)a0;
- (void)_notifyDelegateOfChangeForKeys:(id)a0 application:(id)a1;
- (void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)a0;
- (id)_stateQueue_addStoreForIdentifierIfNecessary:(id)a0;
- (void)_stateQueue_markDirty;
- (id)_stateQueue_objectForKey:(id)a0 forIdentifier:(id)a1;
- (id)_stateQueue_objectsForKeys:(id)a0;
- (void)_stateQueue_removeStoreForIdentifier:(id)a0;
- (void)_writeQueue_flushSynchronously;

@end
