@protocol CNObservable;

@interface _CNDistinctUntilChangedObservable : CNObservable {
    id<CNObservable> _observable;
    id _lastObservedResult;
}

- (void).cxx_destruct;
- (BOOL)_resultIsDistinctFromLastResult:(id)a0;
- (id)initWithObservable:(id)a0;
- (id)subscribe:(id)a0;

@end
