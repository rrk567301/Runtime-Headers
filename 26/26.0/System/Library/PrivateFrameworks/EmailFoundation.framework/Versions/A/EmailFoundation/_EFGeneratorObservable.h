@class EFManualCancelationToken;
@protocol EFScheduler;

@interface _EFGeneratorObservable : EFObservable {
    id<EFScheduler> _scheduler;
    EFManualCancelationToken *_cancelable;
    id _state;
    id /* block */ _condition;
    id /* block */ _nextStateForState;
    id /* block */ _resultFromState;
    id /* block */ _delayForState;
}

- (BOOL)_isFinished;
- (id)subscribe:(id)a0;
- (void)_scheduleNextResultForObserver:(id)a0;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 delay:(id /* block */)a4 scheduler:(id)a5;
- (void)_updateState;
- (void).cxx_destruct;

@end
