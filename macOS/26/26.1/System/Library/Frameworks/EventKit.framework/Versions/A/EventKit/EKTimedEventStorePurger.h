@class EKEventStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTimedEventStorePurger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double internalTimeout;
@property (copy, nonatomic) id /* block */ internalCreationBlock;
@property (copy, nonatomic) id /* block */ internalChangedBlock;
@property (nonatomic) BOOL ignoreLowLevelDatabaseChangedNotifications;
@property (nonatomic) BOOL internalPurgingAllowed;
@property (retain, nonatomic) EKEventStore *internalStore;
@property (copy, nonatomic) id /* block */ creationBlock;
@property (copy, nonatomic) id /* block */ changedBlock;
@property (nonatomic) BOOL purgingAllowed;
@property (nonatomic) double timeout;

- (void)_addPersistentNotificationObservers;
- (void)_eventStoreChangedNotification:(id)a0;
- (id)acquireCachedEventStoreOrCreate:(BOOL)a0;
- (void)_removeTransientEventStoreChangeObserver;
- (void)dealloc;
- (void)_uninstallTimer;
- (void)_resetIdleTimer;
- (void)_databaseChangedExternally;
- (void)_removePersistentNotificationObservers;
- (void).cxx_destruct;
- (void)_fireChangedBlock;
- (id)init;

@end
