@class NSError;

@interface HMFRejectedFuture : HMFFuture {
    NSError *_error;
}

- (void).cxx_destruct;
- (char)isPending;
- (id)then:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (id)inContext:(id)a0 then:(id /* block */)a1;
- (id)then:(id /* block */)a0 orRecover:(id /* block */)a1;
- (void)getResultWithCompletion:(id /* block */)a0;
- (id)inContext:(id)a0 recover:(id /* block */)a1;
- (id)inContext:(id)a0 then:(id /* block */)a1 orRecover:(id /* block */)a2;
- (struct _HMFFutureBlockOutcome { long long x0; id x1; })outcomeIfSettled;

@end
