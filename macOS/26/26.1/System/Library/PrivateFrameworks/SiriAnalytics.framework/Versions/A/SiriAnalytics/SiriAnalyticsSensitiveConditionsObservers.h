@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsSensitiveConditionsObservers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_observers;
}

- (id)initWithQueue:(id)a0;
- (void)addSensitiveConditionsObserver:(id)a0;
- (void).cxx_destruct;
- (void)pollAllObserversWithCompletion:(id /* block */)a0;

@end
