@class NSMutableDictionary;

@interface RTDarwinNotificationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *registrations;

- (void)postNotification:(id)a0;
- (void)addObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 callback:(void /* function */ *)a3 info:(void *)a4 suspensionBehavior:(long long)a5;
- (void)addObserverForNotificationName:(id)a0 handler:(id /* block */)a1;
- (void)dealloc;
- (void)_handleDarwinNotificationCallback:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)stateForNotificationName:(id)a0;
- (void)removeObserverForNotificationName:(id)a0;
- (void)removeObserver:(id)a0 center:(struct __CFNotificationCenter { } *)a1 key:(id)a2 info:(void *)a3;
- (id)init;

@end
