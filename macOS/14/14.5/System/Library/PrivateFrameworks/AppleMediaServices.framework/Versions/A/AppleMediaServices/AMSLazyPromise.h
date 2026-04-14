@interface AMSLazyPromise : AMSPromise

@property (copy) id /* block */ block;
@property BOOL executedBlock;
@property double timeout;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)resultWithError:(id *)a0;
- (void)addFinishBlock:(id /* block */)a0;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)_runBlock;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addErrorBlock:(id /* block */)a0;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;

@end
