@interface AMSMutablePromise : AMSPromise

+ (char)finishPromise:(id)a0 withResult:(id)a1 error:(id)a2;
+ (id)promiseWithAll:(id)a0;
+ (void)startTimeoutForPromise:(id)a0 timeout:(double)a1;
+ (id)promiseWithAny:(id)a0;
+ (char)_finishPromise:(id)a0 withResult:(id)a1 error:(id)a2 logDuplicateFinishes:(char)a3;
+ (char)cancelPromise:(id)a0;
+ (char)finishPromise:(id)a0 withError:(id)a1;
+ (char)finishPromise:(id)a0 withPromise:(id)a1;
+ (char)finishPromise:(id)a0 withResult:(id)a1;
+ (id)promiseWithAll:(id)a0 timeout:(double)a1;
+ (id)promiseWithAny:(id)a0 timeout:(double)a1;
+ (id)promiseWithFlattenedPromises:(id)a0;

- (char)cancel;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithTimeout:(double)a0;
- (char)finishWithResult:(id)a0;
- (id)continueWithBlock:(id /* block */)a0;
- (id)_mutablePromiseWrappingPromise:(id)a0;
- (id)catchWithBlock:(id /* block */)a0;
- (id)continueWithBinaryPromiseBlock:(id /* block */)a0;
- (id)_mutableBinaryPromiseWrappingBinaryPromise:(id)a0;
- (id)catchWithBinaryPromiseBlock:(id /* block */)a0;
- (char)finishWithPromise:(id)a0;
- (char)finishWithPromiseResult:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1 logDuplicateFinishes:(char)a2;
- (id)promiseWithTimeout:(double)a0;
- (void)startTimeout:(double)a0;
- (id)thenWithBinaryPromiseBlock:(id /* block */)a0;
- (id)thenWithBlock:(id /* block */)a0;

@end
