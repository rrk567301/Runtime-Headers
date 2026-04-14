@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerCountLock;
    unsigned long long _observerCount;
    NSString *_observerCountLastTokenDescription;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)makeManagedObjectContext;
- (void)beginObservingChanges;
- (void)endObservingChanges;
- (void)stopObservingRemoteNotifications;
- (id)initWithPersistentStoreCoordinator:(id)a0 bundle:(id)a1 changeMerger:(id)a2;
- (void)startObservingRemoteNotifications;
- (void)_inq_startObservingRemoteNotifications;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (void)_inq_setLastToken:(id)a0;
- (void)_advanceTokenToCurrent;
- (void)distributeNewTransactionsSinceLastToken;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (id)fetchTransactionsSinceLastToken;
- (void)forceUserInterfaceReload;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (id)localEventFromTransactions:(id)a0;

@end
