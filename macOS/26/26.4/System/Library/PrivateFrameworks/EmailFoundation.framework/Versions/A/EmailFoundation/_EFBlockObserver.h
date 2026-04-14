@interface _EFBlockObserver : EFObserver {
    id /* block */ _resultBlock;
    id /* block */ _completionBlock;
    id /* block */ _failureBlock;
}

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)observerDidFailWithError:(id)a0;

@end
