@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress {
    NSArray *_children;
    NSArray *_childrenProgressObservers;
    NSObject<OS_dispatch_queue> *_childrenProgressObserversQueue;
}

- (id)initWithChildren:(id)a0;
- (double)maxValue;
- (double)value;
- (void)removeProgressObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isIndeterminate;
- (id)initForSubclass;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_updateChildrenProgressObservers;

@end
