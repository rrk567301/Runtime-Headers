@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    unsigned long long _observerCount;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)makeManagedObjectContext;
- (void)stopObservingRemoteNotifications;
- (id)initWithPersistentStoreCoordinator:(id)a0 changeMerger:(id)a1;
- (void)startObservingRemoteNotifications;
- (void)_inq_startObservingRemoteNotifications;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (void)pauseChangeDistribution;
- (void)resumeChangeDistribution;
- (void)distributeNewTransactionsSinceLastToken;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (id)fetchTransactionsSinceLastToken;
- (void)forceUserInterfaceReload;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (id)localEventFromTransactions:(id)a0;

@end
