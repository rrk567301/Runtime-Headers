@class NSString, CNObservableContractEnforcement;

@interface _CNBlockObserver : NSObject <CNObserver> {
    id /* block */ _resultBlock;
    id /* block */ _completionBlock;
    id /* block */ _failureBlock;
    CNObservableContractEnforcement *_enforcement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (void).cxx_destruct;
- (void)observerDidComplete;
- (id)initWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

@end
