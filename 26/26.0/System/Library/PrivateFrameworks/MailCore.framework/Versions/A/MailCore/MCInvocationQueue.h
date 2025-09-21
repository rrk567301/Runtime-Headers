@class NSOperationQueue, NSPort;

@interface MCInvocationQueue : NSOperationQueue {
    id _runLoopCancelPortOnceLock;
    NSPort *_runLoopCancelPort;
}

@property (readonly, nonatomic) NSOperationQueue *secondaryQueue;

+ (void)test_cancelAllMonitoredItems;
+ (BOOL)didCancelAllMonitoredItems;
+ (void)test_uncancelAllMonitoredItems;

- (void)cancelAllOperations;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (id)operations;
- (void)dealloc;
- (unsigned long long)operationCount;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)waitUntilAllOperationsAreFinished;
- (void)addInvocation:(id)a0;
- (void)runInvocationOnQueueSynchronously:(id)a0;
- (id)_newOperationWithInvocation:(id)a0;
- (id)initWithSecondaryQueue:(BOOL)a0;

@end
