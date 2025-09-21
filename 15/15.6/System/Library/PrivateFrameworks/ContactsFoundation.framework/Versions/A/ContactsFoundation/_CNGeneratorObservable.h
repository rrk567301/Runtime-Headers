@class CNCancelationToken;
@protocol CNScheduler;

@interface _CNGeneratorObservable : CNObservable {
    id _state;
    id /* block */ _condition;
    id /* block */ _nextState;
    id /* block */ _resultSelector;
    id /* block */ _delay;
    id<CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

- (void).cxx_destruct;
- (char)isFinished;
- (void)updateState;
- (id)subscribe:(id)a0;
- (char)isCanceled;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 delay:(id /* block */)a4 scheduler:(id)a5;
- (void)scheduleNextResultForObserver:(id)a0;
- (void)sendCurrentStateToObserver:(id)a0;
- (void)sendResultsToObserver:(id)a0;

@end
