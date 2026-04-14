@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ULEventMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *observersMap;

- (void)postEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(const void *)a0;
- (void)stopMonitoring:(id)a0;
- (void)dealloc;
- (void)startMonitoring:(id)a0;
- (void)addObserver:(const void *)a0 eventName:(id)a1 handler:(id /* block */)a2;
- (unsigned long long)getNumberOfObserversForEventName:(id)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;
- (void)removeObserver:(const void *)a0 fromEventName:(id)a1;

@end
