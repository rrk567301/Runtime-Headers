@interface AMSMutableLazyPromise : AMSLazyPromise

- (char)cancel;
- (id)initWithBlock:(id /* block */)a0;
- (char)finishWithError:(id)a0;
- (char)finishWithResult:(id)a0 error:(id)a1;
- (char)finishWithResult:(id)a0;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (char)finishWithPromise:(id)a0;

@end
