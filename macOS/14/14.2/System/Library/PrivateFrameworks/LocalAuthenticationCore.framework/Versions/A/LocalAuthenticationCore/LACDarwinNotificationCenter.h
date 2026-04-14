@class NSString, NSHashTable, NSMutableSet;

@interface LACDarwinNotificationCenter : NSObject <LACDarwinNotificationCenter> {
    NSHashTable *_observers;
    NSMutableSet *_subscriptions;
}

@property (class, readonly, nonatomic) LACDarwinNotificationCenter *sharedInstance;

@property (readonly, nonatomic) long long observerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)postNotification:(struct __CFString { } *)a0;
- (void)_postNotification:(struct __CFString { } *)a0;
- (void)removeAllObservers;
- (BOOL)hasObserver:(id)a0;
- (void)addObserver:(id)a0 notification:(struct __CFString { } *)a1;
- (void)_addSubscriptionToNotification:(struct __CFString { } *)a0;
- (BOOL)_hasSubscriptionToNotification:(struct __CFString { } *)a0;
- (void)stopListeningToAllNotifications;
- (void)_notifyObserversAboutNotification:(struct __CFString { } *)a0;
- (void)_startObservingNotification:(struct __CFString { } *)a0;
- (void)_stopObservingAllNotifications;
- (void)listenToLaunchNotifications;

@end
