@class NSString, NSMapTable;
@protocol RemoteUIActivatorDelegate;

@interface RemoteUIActivator : NSObject <RemoteUIActivating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeObjectsLock;
    NSMapTable *_activeInterfaces;
    NSMapTable *_activeListeners;
}

@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_workQueue;
- (BOOL)_activateUserInterface:(id)a0 withParams:(id)a1;
- (id)_createInterface;
- (id)_prepareUIListener;
- (void)_processParams:(id)a0 interface:(id)a1;
- (BOOL)activateUIWithParams:(id)a0;
- (BOOL)hasInvalidatedUIForRequest:(unsigned int)a0;
- (void)invalidateUIForRequest:(unsigned int)a0;

@end
