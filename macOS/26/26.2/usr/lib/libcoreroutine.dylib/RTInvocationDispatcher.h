@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTInvocationDispatcher : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (nonatomic) BOOL valid;

- (void)shutdown;
- (id)initWithQueue:(id)a0;
- (void)enqueueBlock:(id /* block */)a0 description:(id)a1;
- (void)enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (BOOL)invocationsPending;
- (BOOL)dispatchPendingInvocations;
- (unsigned long long)countOfPendingInvocations;
- (void).cxx_destruct;
- (void)_enqueueBlock:(id /* block */)a0 failureBlock:(id /* block */)a1 description:(id)a2;
- (void)removeAllPendingInvocations;
- (id)init;

@end
