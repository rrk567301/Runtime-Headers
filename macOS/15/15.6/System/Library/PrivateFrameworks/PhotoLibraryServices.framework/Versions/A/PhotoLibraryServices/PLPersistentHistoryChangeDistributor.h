@class PLChangeHandlingNotificationObserver, NSString, PFStateCaptureHandler, PLCoreDataChangeMerger, NSPersistentStoreCoordinator, NSPersistentHistoryToken, NSObject, PFStateCaptureEventLog;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject <PFStateCaptureProvider> {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerCountLock;
    unsigned long long _observerCount;
    NSString *_observerCountLastTokenDescription;
    PFStateCaptureEventLog *_eventLog;
    PFStateCaptureHandler *_stateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)makeManagedObjectContext;
- (id)stateCaptureDictionary;
- (void)beginObservingChanges;
- (void)endObservingChanges;
- (void)_advanceTokenToCurrent;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (void)_inq_distributeTransactions:(id)a0 withXPCTransaction:(id)a1 debugEvent:(id)a2;
- (id)_inq_fetchTransactionsSinceLastTokenWithDebugEvent:(id)a0;
- (void)_inq_forceUserInterfaceReload;
- (void)_inq_setLastToken:(id)a0;
- (void)_inq_startObservingRemoteNotifications;
- (void)distributeNewTransactionsSinceLastToken;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0 bundle:(id)a1 changeMerger:(id)a2;
- (id)localEventFromTransactions:(id)a0;
- (void)startObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;

@end
