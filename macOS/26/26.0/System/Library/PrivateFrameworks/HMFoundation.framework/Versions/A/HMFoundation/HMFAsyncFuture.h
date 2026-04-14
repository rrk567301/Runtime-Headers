@class HMFPromise;

@interface HMFAsyncFuture : HMFFuture {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _state;
    HMFPromise *_promise;
    id _value;
}

- (id)inContext:(id)a0 then:(id /* block */)a1 orRecover:(id /* block */)a2;
- (id)recover:(id /* block */)a0;
- (id)then:(id /* block */)a0;
- (void)getResultWithCompletion:(id /* block */)a0;
- (id)inContext:(id)a0 recover:(id /* block */)a1;
- (id)then:(id /* block */)a0 orRecover:(id /* block */)a1;
- (BOOL)isPending;
- (id)inContext:(id)a0 then:(id /* block */)a1;
- (struct _HMFFutureBlockOutcome { long long x0; id x1; })outcomeIfSettled;
- (void).cxx_destruct;

@end
