@class NSOperationQueue, NSPort;

@interface MCInvocationQueue : NSOperationQueue {
    id _runLoopCancelPortOnceLock;
    NSPort *_runLoopCancelPort;
}

@property (readonly, nonatomic) NSOperationQueue *secondaryQueue;

+ (void)test_cancelAllMonitoredItems;
+ (char)didCancelAllMonitoredItems;
+ (void)test_uncancelAllMonitoredItems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)operationCount;
- (id)operations;
- (void)waitUntilAllOperationsAreFinished;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (void)addInvocation:(id)a0;
- (void)runInvocationOnQueueSynchronously:(id)a0;
- (id)_newOperationWithInvocation:(id)a0;
- (id)initWithSecondaryQueue:(char)a0;

@end
