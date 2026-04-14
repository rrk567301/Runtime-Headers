@class AMSMutablePromise;

@interface AMSBinaryPromise : NSObject

@property (retain) AMSMutablePromise *backingPromise;

+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithError:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithPromise:(id)a0;
+ (id)promiseWithSuccess;
+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;

- (id)init;
- (void)waitUntilFinished;
- (void).cxx_destruct;
- (BOOL)cancel;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)finishWithError:(id)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id /* block */)completionHandlerAdapter;
- (void)addErrorBlock:(id /* block */)a0;
- (void)resultWithCompletion:(id /* block */)a0;
- (void)resultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (id)thenWithBlock:(id /* block */)a0;
- (id)promiseAdapter;
- (void)_removeFromGlobalPromiseStorage;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithSuccess;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;

@end
