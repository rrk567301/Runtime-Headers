@class NSTimer, NSCondition, NSError, NSMutableArray;

@interface GTFuture_replayer : NSOperation {
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

+ (id)future;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)futureWithResult:(id)a0 error:(id)a1;
+ (BOOL)logPerformance;

- (void)setQueuePriority:(long long)a0;
- (id)dependencies;
- (BOOL)isAsynchronous;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)a0;
- (id)error;
- (BOOL)isFinished;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isExecuting;
- (void)waitUntilFinished;
- (void)cancel;
- (void)setResult:(id)a0;
- (long long)queuePriority;
- (id)init;
- (void)resolveWithFuture:(id)a0;
- (BOOL)isCancelled;
- (void)setError:(id)a0;
- (void)start;
- (void)dealloc;
- (id)result;
- (void)addDependency:(id)a0;
- (void)addResultHandler:(id /* block */)a0;
- (void)_setResult:(id)a0 error:(id)a1 notify_NOLOCK:(BOOL)a2;
- (void)_addDependency_REQUIRESLOCK:(id)a0;
- (id)_dependencies_NOLOCK;
- (void)_start_NOLOCK;
- (BOOL)_waitForDependencies_REQUIRESLOCK;
- (BOOL)boolResult;
- (int)intResult;
- (void)notifyGroup:(id)a0;
- (void)notifyOnQueue:(id)a0 handler:(id /* block */)a1;
- (void)requestResult:(id /* block */)a0;
- (void)timeoutAfter:(double)a0 label:(id)a1;
- (unsigned int)uint32Result;
- (void)waitUntilResolved;

@end
