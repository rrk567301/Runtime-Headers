@class NSObject;
@protocol OS_dispatch_queue;

@interface CalDispatchQueueAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)performAfterDelay:(double)a0 block:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)performAsync:(id /* block */)a0;

@end
