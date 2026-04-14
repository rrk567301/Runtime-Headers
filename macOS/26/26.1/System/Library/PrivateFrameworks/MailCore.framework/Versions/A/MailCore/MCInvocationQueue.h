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
- (id)operations;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)operationCount;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)waitUntilAllOperationsAreFinished;
- (void)addInvocation:(id)a0;
- (void)runInvocationOnQueueSynchronously:(id)a0;
- (id)_newOperationWithInvocation:(id)a0;
- (id)initWithSecondaryQueue:(BOOL)a0;

@end
