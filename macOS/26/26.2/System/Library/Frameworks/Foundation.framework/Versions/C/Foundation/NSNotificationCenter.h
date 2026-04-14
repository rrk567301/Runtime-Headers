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
- (void)removeObserver:(id)a0;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)postNotification:(id)a0;
- (id)addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (id)debugDescription;
- (id)description;
- (BOOL)isEmpty;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (id)init;
- (void)dealloc;
- (void)postNotificationName:(id)a0 object:(id)a1;
- (id)_addObserverForName:(id)a0 object:(id)a1 queue:(id)a2 usingBlock:(id /* block */)a3;
- (unsigned long long)_addObserver:(id)a0 object:(id)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)_addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3 options:(unsigned long long)a4;
- (id)_getActorQueueManager;
- (id)_initWithCFNotificationCenter:(struct __CFNotificationCenter { } *)a0;
- (void)_removeObserver:(unsigned long long)a0 performSubclassCheck:(BOOL)a1;
- (void)postNotificationName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
