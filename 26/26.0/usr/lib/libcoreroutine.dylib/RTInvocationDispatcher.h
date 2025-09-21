@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (void)shutdown;
- (id)initWithQueue:(id)a0;
- (void)removeAllPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (unsigned long long)countOfPendingInvocations;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (id)init;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (BOOL)invocationsPending;
- (BOOL)dispatchPendingInvocations;
- (void).cxx_destruct;

@end
