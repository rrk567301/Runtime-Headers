@class NSOperationQueue, NSPort;

@interface ICNFMCInvocationQueue : NSOperationQueue {
    id _runLoopCancelPortOnceLock;
    NSPort *_runLoopCancelPort;
}

@property (readonly, nonatomic) NSOperationQueue *secondaryQueue;

+ (BOOL)didCancelAllMonitoredItems;
+ (void)cancelAllMonitoredItems;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (id)operations;
- (void)cancelAllOperations;
- (id)initWithMaxConcurrentOperationCount:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)operationCount;
- (void)waitUntilAllOperationsAreFinished;
- (void)addInvocation:(id)a0;
- (void)runInvocationOnQueueSynchronously:(id)a0;
- (id)_newOperationWithInvocation:(id)a0;
- (id)initWithSecondaryQueue:(BOOL)a0;

@end
