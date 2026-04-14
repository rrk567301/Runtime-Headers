@class NSOperationQueue, NSPort;

@interface ICNFMCInvocationQueue : NSOperationQueue {
    id _runLoopCancelPortOnceLock;
    NSPort *_runLoopCancelPort;
}

@property (readonly, nonatomic) NSOperationQueue *secondaryQueue;

+ (BOOL)didCancelAllMonitoredItems;
+ (void)cancelAllMonitoredItems;

- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (id)operations;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancelAllOperations;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)operationCount;
- (void)dealloc;
- (void)waitUntilAllOperationsAreFinished;
- (void)addInvocation:(id)a0;
- (void)runInvocationOnQueueSynchronously:(id)a0;
- (id)_newOperationWithInvocation:(id)a0;
- (id)initWithSecondaryQueue:(BOOL)a0;

@end
