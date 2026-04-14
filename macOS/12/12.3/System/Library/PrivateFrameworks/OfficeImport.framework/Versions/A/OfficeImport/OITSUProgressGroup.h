@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface OITSUProgressGroup : OITSUProgress {
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (void)dealloc;
- (double)value;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (id)initWithChildren:(id)a0;
- (void)removeProgressObserver:(id)a0;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_updateChildrenProgressObservers;

@end
