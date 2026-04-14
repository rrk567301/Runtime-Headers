@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface _LTInterruptionHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)_didReceiveInterruption;
- (id)addObservationBlock:(id /* block */)a0;

@end
