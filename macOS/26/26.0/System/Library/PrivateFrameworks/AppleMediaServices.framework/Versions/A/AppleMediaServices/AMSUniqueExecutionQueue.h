@class AMSMutablePromise, NSObject;
@protocol OS_dispatch_queue;

@interface AMSUniqueExecutionQueue : NSObject

@property (copy) id /* block */ block;
@property (retain) NSObject<OS_dispatch_queue> *completionCallbacksQueue;
@property (retain) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain) AMSMutablePromise *executionPromise;
@property (readonly) NSObject<OS_dispatch_queue> *executionPromiseAccessQueue;

- (void)addCompletionBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_beginExecutingBlockWithPromise:(id)a0;
- (id)_createExecutionPromise;
- (void)addCompletionBlockForSubsequentExecution:(id /* block */)a0;

@end
