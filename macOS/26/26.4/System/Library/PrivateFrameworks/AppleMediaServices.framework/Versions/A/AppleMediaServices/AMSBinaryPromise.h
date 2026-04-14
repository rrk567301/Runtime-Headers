@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSBinaryPromise *retainedSelf;
@property (readonly, nonatomic) AMSMutablePromise *backingPromise;

+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithSuccess;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithPromise:(id)a0;

- (id)promiseAdapter;
- (id)thenWithPromiseBlock:(id /* block */)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)finishWithError:(id)a0;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (void)addFinishBlock:(id /* block */)a0;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)addSuccessBlock:(id /* block */)a0;
- (void)stopRetainingSelf;
- (id)catchWithPromiseBlock:(id /* block */)a0 successValue:(id)a1;
- (void)resultWithCompletion:(id /* block */)a0;
- (id)continueWithPromiseBlock:(id /* block */)a0;
- (void)waitUntilFinished;
- (BOOL)cancel;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)resultWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithBackingPromise:(id)a0;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)continueWithBlock:(id /* block */)a0;
- (id)init;
- (BOOL)finishWithSuccess;
- (id)thenWithBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;

@end
