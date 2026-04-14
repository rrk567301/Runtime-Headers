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

+ (id)blacklistedNotificationQueue;
+ (id)blacklistedRowIDs;
+ (void)addBlacklistedNotificationObjectID:(id)a0;
+ (id)requestedDarwinNotifications;

- (void)_timerFired;
- (id)initWithOptions:(long long)a0;
- (void)attemptReloadSynchronously:(BOOL)a0;
- (void)start;
- (void)stop;
- (id)_initWithOptions:(long long)a0 eventStore:(id)a1 eventStoreGetter:(id /* block */)a2;
- (void)_databaseChanged;
- (void)trackChangesInEventStore;
- (void)_syncTimerFired:(id)a0;
- (void)attemptReload;
- (id)init;
- (void)_eventStoreChangedNotification:(id)a0;
- (id)_eventStore;
- (void)_updateTimerFireDate:(id)a0;
- (void).cxx_destruct;
- (void)handleDarwinNotification:(id)a0;
- (void)_syncDidStart;
- (void)_notificationCountChangedExternally;
- (void)dealloc;
- (void)_killTimer;
- (void)adjust;
- (void)_killSyncTimer:(id)a0;
- (void)_syncDidEndExternally;
- (void)_addRemovedOrAddedObjectIDsTo:(id)a0 oldNotifications:(id)a1 newNotifications:(id)a2;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)a0 earliestExpiringNotification:(id *)a1;
- (void)_alertPrefChanged;
- (id)effectiveCallbackQueue;
- (id)initWithOptions:(long long)a0 eventStoreGetter:(id /* block */)a1;
- (void)_resetSyncTimer;
- (void)_eventStoreChanged;
- (void)_syncDidEnd:(id)a0;
- (id)initWithOptions:(long long)a0 eventStore:(id)a1;

@end
