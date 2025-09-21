@class NSDate, PCPersistentTimer, NSArray, NSTimer, EKTimedEventStorePurger, EKEventStore, NSObject, NSMutableArray, CADInMemoryChangeTimestamp;
@protocol OS_os_log, OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
    id /* block */ _eventStoreGetter;
    char _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    char _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    CADInMemoryChangeTimestamp *_lastChangedTimestamp;
    char _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    char _initialCheck;
    char _shouldInstallPersistentTimer;
    char _useSyncIdleTimer;
    char _registerForDarwinNotifications;
    char _filteredByShowsNotificationsFlag;
    char _computeChangedNotificationSet;
    char _automaticallyFaultNotifications;
    char _lastExpirationTimerFireDateWasInThePast;
    char _isExpandedCount;
    char _excludeUncheckedCalendars;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *logHandle;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) char isMonitoringOnlyNotificationCount;
@property (readonly, nonatomic) EKTimedEventStorePurger *eventStorePurger;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackNotificationQueue;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (readonly, nonatomic) NSArray *notificationReferences;

+ (void)addBlacklistedNotificationObjectID:(id)a0;
+ (id)blacklistedNotificationQueue;
+ (id)blacklistedRowIDs;
+ (id)requestedDarwinNotifications;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(long long)a0;
- (void)start;
- (void)stop;
- (void)_timerFired;
- (void)_eventStoreChangedNotification:(id)a0;
- (void)_killSyncTimer:(id)a0;
- (void)_resetSyncTimer;
- (void)_addRemovedOrAddedObjectIDsTo:(id)a0 oldNotifications:(id)a1 newNotifications:(id)a2;
- (void)_alertPrefChanged;
- (void)_databaseChanged;
- (id)_eventStore;
- (void)_eventStoreChanged;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)a0 earliestExpiringNotification:(id *)a1;
- (id)_initWithOptions:(long long)a0 eventStore:(id)a1 eventStoreGetter:(id /* block */)a2;
- (void)_killTimer;
- (void)_notificationCountChangedExternally;
- (void)_syncDidEnd:(id)a0;
- (void)_syncDidEndExternally;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)a0;
- (void)_updateTimerFireDate:(id)a0;
- (void)adjust;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(char)a0;
- (id)effectiveCallbackQueue;
- (void)handleDarwinNotification:(id)a0;
- (id)initWithOptions:(long long)a0 eventStore:(id)a1;
- (id)initWithOptions:(long long)a0 eventStoreGetter:(id /* block */)a1;
- (void)trackChangesInEventStore;

@end
