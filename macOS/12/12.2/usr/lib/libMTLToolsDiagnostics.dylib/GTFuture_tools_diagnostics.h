@class NSTimer, NSCondition, NSError, NSMutableArray;

@interface GTFuture_tools_diagnostics : NSOperation {
    NSTimer *_timeout;
    NSCondition *_condition;
    BOOL _resolved;
    BOOL _cancelled;
    id _result;
    NSError *_error;
    NSMutableArray *_notifyList;
    NSMutableArray *_inflightDependencies;
    BOOL _started;
    id /* block */ _completion;
    long long _priority;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)future;
+ (BOOL)logPerformance;
+ (id)futureWithResult:(id)a0 error:(id)a1;

- (void)dealloc;
- (id)init;
- (void)waitUntilFinished;
- (id)error;
- (void)setQueuePriority:(long long)a0;
- (id)result;
- (void)setResult:(id)a0;
- (void)setError:(id)a0;
- (void)start;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)dependencies;
- (long long)queuePriority;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)a0;
- (void)addDependency:(id)a0;
- (void)resolveWithFuture:(id)a0;
- (void)addResultHandler:(id /* block */)a0;
- (BOOL)boolResult;
- (void)_setResult:(id)a0 error:(id)a1 notify_NOLOCK:(BOOL)a2;
- (void)_addDependency_REQUIRESLOCK:(id)a0;
- (id)_dependencies_NOLOCK;
- (void)_start_NOLOCK;
- (void)waitUntilResolved;
- (void)requestResult:(id /* block */)a0;
- (unsigned int)uint32Result;
- (int)intResult;
- (void)timeoutAfter:(double)a0 label:(id)a1;
- (void)notifyOnQueue:(struct dispatch_queue_s { } *)a0 handler:(id /* block */)a1;
- (void)notifyGroup:(struct dispatch_group_s { } *)a0;
- (BOOL)_waitForDependencies_REQUIRESLOCK;

@end
