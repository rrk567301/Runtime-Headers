@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) char valid;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)shutdown;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (unsigned long long)countOfPendingInvocations;
- (char)dispatchPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (char)invocationsPending;
- (void)removeAllPendingInvocations;

@end
