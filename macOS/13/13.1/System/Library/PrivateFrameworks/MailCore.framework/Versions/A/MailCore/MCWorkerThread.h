@interface MCWorkerThread : NSObject

+ (void)initialize;
+ (void)test_cancelAllInvocations;
+ (void)runInvocationOnQueueSynchronously:(id)a0;
+ (void)addInvocationToQueue:(id)a0;
+ (void)test_waitUntilAllOperationsAreFinished;

@end
