@class NSDate, PCPersistentTimer, NSArray, NSTimer, EKTimedEventStorePurger, EKEventStore, NSObject, NSMutableArray, CADInMemoryChangeTimestamp;
@protocol OS_os_log, OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
    id /* block */ _eventStoreGetter;
    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    CADInMemoryChangeTimestamp *_lastChangedTimestamp;
    BOOL _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    BOOL _initialCheck;
    BOOL _shouldInstallPersistentTimer;
    BOOL _useSyncIdleTimer;
    BOOL _registerForDarwinNotifications;
    BOOL _filteredByShowsNotificationsFlag;
    BOOL _computeChangedNotificationSet;
    BOOL _automaticallyFaultNotifications;
    BOOL _lastExpirationTimerFireDateWasInThePast;
    BOOL _isExpandedCount;
    BOOL _excludeUncheckedCalendars;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *logHandle;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) BOOL isMonitoringOnlyNotificationCount;
@property (readonly, nonatomic) EKTimedEventStorePurger *eventStorePurger;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackNotificationQueue;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (readonly, nonatomic) NSArray *notificationReferences;

+ (id)blacklistedRowIDs;
+ (void)addBlacklistedNotificationObjectID:(id)a0;
+ (id)requestedDarwinNotifications;
+ (id)blacklistedNotificationQueue;

- (void)_timerFired;
- (void)attemptReloadSynchronously:(BOOL)a0;
- (void)start;
- (void)dealloc;
- (void)_databaseChanged;
- (id)initWithOptions:(long long)a0 eventStore:(id)a1;
- (id)initWithOptions:(long long)a0;
- (void)stop;
- (void)_killSyncTimer:(id)a0;
- (void)adjust;
- (void)_alertPrefChanged;
- (void)_syncDidEnd:(id)a0;
- (void)attemptReload;
- (void)_updateTimerFireDate:(id)a0;
- (void)_resetSyncTimer;
- (void)_addRemovedOrAddedObjectIDsTo:(id)a0 oldNotifications:(id)a1 newNotifications:(id)a2;
- (void)_notificationCountChangedExternally;
- (id)init;
- (void)_eventStoreChanged;
- (id)initWithOptions:(long long)a0 eventStoreGetter:(id /* block */)a1;
- (id)_initWithOptions:(long long)a0 eventStore:(id)a1 eventStoreGetter:(id /* block */)a2;
- (void)trackChangesInEventStore;
- (void)_eventStoreChangedNotification:(id)a0;
- (id)effectiveCallbackQueue;
- (void)handleDarwinNotification:(id)a0;
- (void)_syncDidEndExternally;
- (void)_killTimer;
- (void)_syncDidStart;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)a0 earliestExpiringNotification:(id *)a1;
- (void)_syncTimerFired:(id)a0;
- (void).cxx_destruct;
- (id)_eventStore;

@end
