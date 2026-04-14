@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (void)postNotification:(id)a0;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void).cxx_destruct;
- (void)removeObserverForNotificationName:(id)a0;
- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (id)init;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;

@end
