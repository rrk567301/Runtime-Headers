@class NSString, FBWorkspaceConnectionsState, NSObject;
@protocol OS_dispatch_queue;

@interface FBWorkspaceConnectionsStateStore : NSObject {
    NSString *_path1;
    NSString *_path2;
    NSObject<OS_dispatch_queue> *_queue;
    FBWorkspaceConnectionsState *_queue_state;
    long long _queue_lastBuffer;
    long long _queue_nextWriteFailure;
    BOOL _queue_writeFailedOnce;
    BOOL _queue_invalidated;
}

+ (void)_unlinkShmPath:(id)a0 graceful:(BOOL)a1;
+ (id)_loadStateFromPath:(id)a0 outGeneration:(out BOOL *)a1 outExisted:(out BOOL *)a2;
+ (BOOL)_storeState:(id)a0 toPath:(id)a1 withGeneration:(BOOL)a2 injectedFailure:(inout long long *)a3;

- (id)init;
- (void).cxx_destruct;

@end
