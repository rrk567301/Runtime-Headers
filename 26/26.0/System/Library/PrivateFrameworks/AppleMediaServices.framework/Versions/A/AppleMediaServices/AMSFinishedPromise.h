@interface AMSFinishedPromise : AMSMutablePromise

+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseWithPromiseResult:(id)a0;
+ (void)logUnavailableInitWithSelector:(SEL)a0;

- (void)addFinishBlock:(id /* block */)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)waitUntilFinished;
- (BOOL)isFinished;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (BOOL)isCancelled;
- (id /* block */)completionHandlerAdapter;
- (id)resultWithError:(id *)a0;
- (id)condition;
- (id)init;
- (void)stopRetainingSelf;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)initWithTimeout:(double)a0;
- (id)valueFromAddingBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)binaryPromiseAdapterForClass:(Class)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)flushCompletionBlocksWithResult:(id)a0;
- (BOOL)isFinishedWithLock;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;

@end
