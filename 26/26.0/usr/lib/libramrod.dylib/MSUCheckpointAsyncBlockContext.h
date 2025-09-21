@class NSObject;
@protocol OS_dispatch_queue;

@interface MSUCheckpointAsyncBlockContext : MSUCheckpointAsyncContext

@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (copy) id /* block */ workBlock;
@property BOOL isCanceled;

- (void)cancel;
- (BOOL)wait;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)waitUntilTime:(unsigned long long)a0;
- (void)runForCheckpoint:(void *)a0;
- (void)runSynchronousForCheckpoint:(void *)a0;
- (void)setAwaitDescription:(void *)a0;
- (void)setStepDescription:(void *)a0;

@end
