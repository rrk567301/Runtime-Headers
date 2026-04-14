@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject

@property (retain) AMSPromiseCompletionBlocks *completionBlocks;
@property (retain) AMSPromiseResult *promiseResult;
@property (retain) NSConditionLock *stateLock;
@property struct Promise<PromiseResult> { void /* function */ **_vptr$Future; struct shared_ptr<AMSCore::Future<PromiseResult>::FutureImp> { struct FutureImp *__ptr_; struct __shared_weak_count *__cntrl_; } mFutureImp; } backingPromise;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isTimedOut) BOOL timedOut;

+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (id)promiseWithResult:(id)a0;
+ (id)promiseWithPromiseResult:(id)a0;
+ (id)promiseWithSome:(id)a0;
+ (id)promiseWithSome:(id)a0 timeout:(double)a1;
+ (id)unwrappedPromiseWithPromise:(id)a0;
+ (void)_configureFlattenedPromise:(id)a0 withPromises:(id)a1 results:(id)a2 previousError:(id)a3 currentPromiseIndex:(unsigned long long)a4;
+ (void)_enumeratePromises:(id)a0 startingAt:(long long)a1 block:(id /* block */)a2;
+ (BOOL)_errorIsCanceledError:(id)a0;
+ (BOOL)_errorIsTimeOutError:(id)a0;
+ (id)promiseFinishedWithDefaultErrorOrResult:(id)a0;

- (id)init;
- (void)waitUntilFinished;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)cancel;
- (id)resultWithError:(id *)a0;
- (BOOL)_isFinished;
- (BOOL)finishWithError:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (void)addFinishBlock:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithResult:(id)a0;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (void)addErrorBlock:(id /* block */)a0;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (id)thenWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (id)binaryPromiseAdapter;
- (id)promiseWithTimeout:(double)a0;
- (BOOL)finishWithPromiseResult:(id)a0;
- (id)mutablePromiseAdapter;
- (void)resultBeforeDate:(id)a0 completion:(id /* block */)a1;
- (id /* block */)boolCompletionHandlerAdapter;
- (id /* block */)nilValueCompletionHandlerAdapter;
- (void)_addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;

@end
