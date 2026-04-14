@class NSHashTable, ASKStorefrontChangeProvider;

@interface ASKRebootstrapCoordinator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handlerTokensLock;
}

@property (class, readonly) ASKRebootstrapCoordinator *sharedCoordinator;

@property (readonly, nonatomic) ASKStorefrontChangeProvider *changeObserver;
@property (readonly, nonatomic) NSHashTable *handlerTokens;
@property (copy, nonatomic) id /* block */ appBootstrapHandler;
@property (nonatomic) long long delayCount;
@property (nonatomic) BOOL hasPendingNotification;

- (id)init;
- (void)notify;
- (void).cxx_destruct;
- (void)scheduleNotification;
- (void)beginDelayingNotifications;
- (void)endDelayingNotifications;
- (void)registerAppBootstrapHandler:(id /* block */)a0;
- (id)registerCleanupHandler:(id /* block */)a0;
- (void)simulateStorefrontChange;

@end
