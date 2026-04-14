@interface AMSLazyPromise : AMSPromise

@property (copy) id /* block */ block;
@property (nonatomic) BOOL executedBlock;
@property (nonatomic) double timeout;

- (void)addErrorBlock:(id /* block */)a0;
- (id)initWithTimeout:(double)a0 block:(id /* block */)a1;
- (BOOL)_runBlock;
- (void)addSuccessBlock:(id /* block */)a0;
- (id)resultBeforeDate:(id)a0 error:(id *)a1;
- (id)resultWithError:(id *)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void)addBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (id)valueFromAddingBlock:(id /* block */)a0 orCallWithResult:(id /* block */)a1;
- (void)addFinishBlock:(id /* block */)a0;
- (id)resultWithTimeout:(double)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithPromiseResult:(id)a0;

@end
