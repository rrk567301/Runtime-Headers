@protocol COMessagingAddOnDelegate;

@interface COMessagingAddOn : COMeshAddOn {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<COMessagingAddOnDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)sendRequest:(id)a0 members:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)didAddToMeshController:(id)a0;
- (void)willRemoveFromMeshController:(id)a0;
- (void)broadcastRequest:(id)a0 recipientsCallback:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_handleRequest:(id)a0 callback:(id /* block */)a1;

@end
