@class NSObject, OITSUProgressContext;
@protocol OS_dispatch_queue;

@interface OITSUProgressContextProgress : OITSUProgress {
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (void)dealloc;
- (id)init;
- (double)value;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)removeProgressObserver:(id)a0;
- (void)p_progressDidChange:(id)a0;
- (id)initWithProgressContext:(id)a0;
- (void)p_updateProgressContextObserver;

@end
