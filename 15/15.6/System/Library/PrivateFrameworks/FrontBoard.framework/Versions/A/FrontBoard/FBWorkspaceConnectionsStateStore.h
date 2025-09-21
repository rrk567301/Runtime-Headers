@class FBWorkspaceConnectionsState, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FBWorkspaceConnectionsStateStore : NSObject {
    NSString *_path1;
    NSString *_path2;
    NSObject<OS_dispatch_queue> *_queue;
    FBWorkspaceConnectionsState *_queue_state;
    long long _queue_lastBuffer;
    long long _queue_nextWriteFailure;
    char _queue_writeFailedOnce;
}

@property (readonly, nonatomic) long long _lastUsedBuffer;
@property (copy, nonatomic) FBWorkspaceConnectionsState *state;

+ (void)_unlinkAllForIdentifier:(id)a0;
+ (id)_loadStateFromPath:(id)a0 outGeneration:(out char *)a1 outExisted:(out char *)a2;
+ (char)_storeState:(id)a0 toPath:(id)a1 withGeneration:(char)a2 injectedFailure:(inout long long *)a3;
+ (void)_unlinkShmPath:(id)a0 graceful:(char)a1;
+ (char)hasSandboxAccessForIdentifier:(id)a0;
+ (id)identifierForName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0;
- (void)_setFailureModeForNextWrite:(long long)a0;

@end
