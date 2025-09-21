@class NSLock;
@protocol EFObservable;

@interface _EFDistinctUntilChangedObservable : EFObservable {
    id<EFObservable> _observable;
    id _lastObservedResult;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0;
- (char)_isLastResultDistinctFromResult:(id)a0;

@end
