@class _PASLock, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue;

@interface PPNotificationManager : NSObject {
    _PASLock *_lockedData;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNotificationCenter *_notificationCenter;
}

+ (id)sharedInstance;
+ (id)addCalendarVisibilityObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (id)new;
+ (void)addEventKitObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addMeCardObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addSuggestionsObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (BOOL)_changePotentiallyAffectsCache:(id)a0;
+ (void)addContactsObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addPortraitChangeObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;
+ (void)addPortraitInvalidationObserverForLifetimeOfObject:(id)a0 block:(id /* block */)a1;

- (void)stopListening;
- (void)simulatePortraitInvalidation;
- (void)fetchObjectChangesFromStore:(id)a0 usingBlock:(id /* block */)a1;
- (void)addSuggestionsChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)dealloc;
- (id)addCalendarVisibilityChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)addEventKitChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)simulatePortraitChange;
- (void)setEKStore:(id)a0;
- (void)addPortraitChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)_registerForEventKitChangeTrackingWithGuardedData:(id)a0;
- (id)init;
- (void)addPortraitInvalidationBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (id)initWithQueueName:(const char *)a0 notificationCenter:(id)a1;
- (void)addMeCardChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)addContactsChangeBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;
- (void)waitOnQueueToDrain;
- (void).cxx_destruct;

@end
