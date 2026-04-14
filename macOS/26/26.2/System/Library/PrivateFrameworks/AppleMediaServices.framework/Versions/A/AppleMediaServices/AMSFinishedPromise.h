@interface AMSFinishedPromise : AMSMutablePromise

+ (id)promiseWithPromiseResult:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (id)promiseWithResult:(id)a0;
+ (void)logUnavailableInitWithSelector:(SEL)a0;

- (id)continueWithBlock:(id /* block */)a0;
- (id)condition;
- (id /* block */)completionHandlerAdapter;
- (void)waitUntilFinished;
- (BOOL)isCancelled;
- (void)addErrorBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithError:(id *)a0;
- (BOOL)isFinished;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)valueFromAddingBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addFinishBlock:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)stopRetainingSelf;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)resultWithCompletion:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;
- (id)init;
- (id)binaryPromiseAdapterForClass:(Class)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)flushCompletionBlocksWithResult:(id)a0;
- (BOOL)isFinishedWithLock;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;

@end
