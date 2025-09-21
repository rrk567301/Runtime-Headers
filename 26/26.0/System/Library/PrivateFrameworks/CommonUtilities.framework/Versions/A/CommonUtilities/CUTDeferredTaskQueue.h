@class NSNumber, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CUTDeferredTaskQueue : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ originalBlock;
@property (readonly, nonatomic) NSMutableArray *pendingDispatchBlocks;
@property (readonly, nonatomic) NSNumber *capacity;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)initWithCapacity:(long long)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithNumberCapacity:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)enqueueExecutionWithTarget:(id)a0 afterDelay:(double)a1;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)cancelPendingExecutions;
- (void).cxx_destruct;

@end
