@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_progressObservers;
}

@property (weak) id<ASDNotificationCenterDialogObserver> dialogObserver;

+ (id)defaultCenter;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (void)removeProgressObserver:(id)a0;
- (void)removeNotificationObserver:(id)a0 forName:(id)a1;
- (void)addNotificationObserver:(id)a0 forName:(id)a1;
- (void)addProgressObserver:(id)a0;
- (void)deliverAuthenticateRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverDialogRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverEngagementRequest:(id)a0 withResultHandler:(id /* block */)a1;
- (void)deliverNotifications:(id)a0;
- (void)deliverProgress:(id)a0;
- (void)isDialogObserverAvailableWithReplyHandler:(id /* block */)a0;
- (id)_copyNotificationObserversForName:(id)a0;
- (id)_copyProgressObservers;

@end
