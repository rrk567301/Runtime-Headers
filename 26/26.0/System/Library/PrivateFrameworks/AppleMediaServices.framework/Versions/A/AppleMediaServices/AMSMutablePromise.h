@interface AMSMutablePromise : AMSPromise

+ (id)promiseWithFlattenedPromises:(id)a0;
+ (BOOL)cancelPromise:(id)a0;
+ (BOOL)finishPromise:(id)a0 withResult:(id)a1 error:(id)a2;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (void)startTimeoutForPromise:(id)a0 timeout:(double)a1;
+ (id)promiseWithAll:(id)a0;
+ (BOOL)finishPromise:(id)a0 withPromise:(id)a1;
+ (BOOL)finishPromise:(id)a0 withResult:(id)a1;
+ (BOOL)_finishPromise:(id)a0 withResult:(id)a1 error:(id)a2 logDuplicateFinishes:(BOOL)a3;
+ (id)promiseWithAny:(id)a0;
+ (BOOL)finishPromise:(id)a0 withError:(id)a1;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;

- (id)thenWithBlock:(id /* block */)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (BOOL)finishWithPromise:(id)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (BOOL)finishWithResult:(id)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1;
- (id)promiseWithTimeout:(double)a0;
- (id)catchWithBinaryPromiseBlock:(id /* block */)a0;
- (BOOL)cancel;
- (BOOL)finishWithError:(id)a0;
- (id)_mutableBinaryPromiseWrappingBinaryPromise:(id)a0;
- (void)startTimeout:(double)a0;
- (BOOL)finishWithPromiseResult:(id)a0;
- (id)thenWithBinaryPromiseBlock:(id /* block */)a0;
- (id)_mutablePromiseWrappingPromise:(id)a0;
- (id)continueWithBinaryPromiseBlock:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;
- (BOOL)finishWithResult:(id)a0 error:(id)a1 logDuplicateFinishes:(BOOL)a2;

@end
