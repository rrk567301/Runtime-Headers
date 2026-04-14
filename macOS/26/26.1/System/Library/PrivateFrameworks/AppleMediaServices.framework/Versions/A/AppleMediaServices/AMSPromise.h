@class AMSPromiseCompletionBlocks, NSCondition, AMSPromiseResult;

@interface AMSPromise : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (readonly, nonatomic) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain, nonatomic) AMSPromise *retainedSelf;
@property (readonly, nonatomic) NSCondition *condition;
@property (nonatomic) BOOL conditionHasSignaled;
@property (retain, nonatomic) AMSPromiseResult *promiseResult;
@property (readonly, nonatomic) BOOL isFinishedWithLock;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isTimedOut) BOOL timedOut;

+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (id)promiseWithPromiseResult:(id)a0;
+ (id)promiseWithResult:(id)a0;
+ (id)unwrappedPromiseWithPromise:(id)a0;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)a0;
+ (void)_enumeratePromises:(id)a0 startingAt:(long long)a1 block:(id /* block */)a2;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithErrorCode:(long long)a0 title:(id)a1 message:(id)a2 underlyingError:(id)a3;
+ (void)_configureFlattenedPromise:(id)a0 withPromises:(id)a1 results:(id)a2 previousError:(id)a3 currentPromiseIndex:(unsigned long long)a4;
+ (id)promiseWithSome:(id)a0;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithErrorCode:(long long)a0 title:(id)a1 message:(id)a2;
+ (id)promiseWithSome:(id)a0 timeout:(double)a1;

- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithPromise:(id)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)initWithPromiseResult:(id)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (BOOL)finishWithResult:(id)a0;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (BOOL)finishWithError:(id)a0;
- (BOOL)cancel;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)catchWithBinaryPromiseBlock:(id /* block */)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (BOOL)finishWithPromiseResult:(id)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)waitUntilFinished;
- (void)resultWithCompletion:(id /* block */)a0;
- (id)valueFromAddingBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)promiseWithTimeout:(double)a0;
- (id)thenWithBinaryPromiseBlock:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;
- (void)stopRetainingSelf;
- (id)continueWithBinaryPromiseBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id)thenWithBlock:(id /* block */)a0;
- (id)init;
- (id)binaryPromiseAdapter;
- (id)binaryPromiseAdapterForClass:(Class)a0;
- (id /* block */)boolCompletionHandlerAdapter;
- (void)flushCompletionBlocksWithResult:(id)a0;
- (id)mutablePromiseAdapter;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;

@end
