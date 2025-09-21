@class _NotificationCenterActorQueueManager;

@interface NSNotificationCenter : NSObject {
    struct __CFNotificationCenter { } *_impl;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } actorQueueManagerLock;
    _NotificationCenterActorQueueManager *_actorQueueManager;
}

@property (class, readonly) NSNotificationCenter *defaultCenter;

+ (void)load;
+ (id)_defaultCenterWithoutCreating;

- (void)_removeObserver:(unsigned long long)a0;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)description;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)postNotification:(id)a0;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (unsigned long long)_addObserver:(id)a0 object:(id)a1 usingBlock:(id /* block */)a2;
- (id)_addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (id)_getActorQueueManager;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (void)_removeObserver:(unsigned long long)a0 performSubclassCheck:(BOOL)a1;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
