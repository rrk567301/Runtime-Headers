@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSBinaryPromise *retainedSelf;
@property (readonly, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithSuccess;

- (id)thenWithBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithSuccess;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)waitUntilFinished;
- (id /* block */)completionHandlerAdapter;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)resultWithError:(id *)a0;
- (id)promiseAdapter;
- (BOOL)cancel;
- (BOOL)finishWithError:(id)a0;
- (id)init;
- (void)stopRetainingSelf;
- (id)thenWithPromiseBlock:(id /* block */)a0;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)continueWithPromiseBlock:(id /* block */)a0;
- (id)initWithBackingPromise:(id)a0;
- (id)catchWithPromiseBlock:(id /* block */)a0 successValue:(id)a1;
- (void).cxx_destruct;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;

@end
