@class BSServiceQueue, RBSProcessHandle, BSServiceDispatchQueue, NSString, FBWorkspaceEventDispatcher, BSServiceCompoundQueue;

@interface FBSceneSynchronizer : NSObject {
    NSString *_identifier;
    FBWorkspaceEventDispatcher *_dispatcher;
    RBSProcessHandle *_lock_process;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_waitingForConnect;
}

@property (readonly, nonatomic) BSServiceDispatchQueue *machQueue;
@property (readonly, nonatomic) BSServiceQueue *callOutQueue;
@property (readonly, nonatomic) BSServiceCompoundQueue *serviceQueue;
@property (readonly, nonatomic) RBSProcessHandle *processHandle;

+ (id)detachedSynchronizerWithIdentifier:(id)a0;
+ (id)synchronizerForViewServiceWithProcessIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)performAsyncOnSendingQueue:(id /* block */)a0;

@end
