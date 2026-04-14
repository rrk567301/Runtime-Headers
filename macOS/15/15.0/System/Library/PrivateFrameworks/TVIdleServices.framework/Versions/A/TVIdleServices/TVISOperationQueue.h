@class NSObject;
@protocol OS_dispatch_queue, TVISOperationQueueOwner;

@interface TVISOperationQueue : NSObject {
    struct { BOOL respondsToWillBeginWork; BOOL respondsToDidEndWork; BOOL respondsToBarrierTask; } _ownerFlags;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ;
@property (readonly, weak, nonatomic) id<TVISOperationQueueOwner> owner;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)async:(id)a0 :(id /* block */)a1;
- (void)_perform:(id)a0 :(id /* block */)a1;
- (id /* block */)_promise:(id)a0 :(id /* block */)a1;
- (void)barrierAsync:(id)a0 :(id /* block */)a1;
- (void)barrierSync:(id)a0 :(id /* block */)a1;
- (void)notify:(id)a0 :(id)a1 :(id /* block */)a2;
- (void)sync:(id)a0 :(id /* block */)a1;

@end
