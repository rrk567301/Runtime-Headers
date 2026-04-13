@class AMSPromise;

@interface AMSBinaryPromise : NSObject

@property (retain) AMSPromise *backingPromise;

+ (id)promiseWithError:(id)a0;
+ (id)promiseWithAll:(id)a0;
+ (id)promiseWithSuccess;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)_globalPromiseStorage;
+ (id)promiseWithAny:(id)a0;
+ (id)promiseWithFlattenedPromises:(id)a0;
+ (id)promiseWithPromise:(id)a0;

- (id)init;
- (void)waitUntilFinished;
- (void).cxx_destruct;
- (BOOL)cancel;
- (BOOL)resultWithError:(id *)a0;
- (BOOL)finishWithError:(id)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id /* block */)completionHandlerAdapter;
- (BOOL)resultWithTimeout:(double)a0 error:(id *)a1;
- (id)thenWithBlock:(id /* block */)a0;
- (void)addErrorBlock:(id /* block */)a0;
- (id)promiseAdapter;
- (id)catchWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithSuccess;
- (void)_removeFromGlobalPromiseStorage;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)waitUntilFinishedWithTimeout:(double)a0;
- (id)continueWithBlock:(id /* block */)a0;

@end
