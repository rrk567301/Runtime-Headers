@interface _NSInternalNotificationCenter : NSObject {
    struct __CFXNotificationRegistrar { } *_registrar;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)removeObserver:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (void)postNotification:(id)a0;
- (unsigned long long)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)removeObserverToken:(unsigned long long)a0;
- (id)NS_objectObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;

@end
