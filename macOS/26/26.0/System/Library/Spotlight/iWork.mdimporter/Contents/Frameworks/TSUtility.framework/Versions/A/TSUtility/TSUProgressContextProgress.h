@class NSObject, TSUProgressContext;
@protocol OS_dispatch_queue;

@interface TSUProgressContextProgress : TSUProgress {
    TSUProgressContext *_progressContext;
    NSObject<OS_dispatch_queue> *_progressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (double)value;
- (void)removeProgressObserver:(id)a0;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (void).cxx_destruct;
- (id)initForSubclass;
- (void)p_updateProgressContextObserver;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithProgressContext:(id)a0;
- (void)p_progressDidChange:(id)a0;

@end
