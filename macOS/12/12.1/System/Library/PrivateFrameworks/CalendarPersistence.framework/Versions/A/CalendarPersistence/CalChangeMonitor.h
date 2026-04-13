@class NSTask, NSString, NSArray, NSURL, NSTimer, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CalChangeMonitor : CalPersistenceMonitor {
    BOOL disabled;
    BOOL migrating;
    BOOL _hasUnsyncedChanges;
    NSArray *_fastSyncArgs;
    NSArray *_slowSyncArgs;
    NSArray *_refreshArgs;
    NSArray *_restoreSyncArgs;
    NSTimer *syncTimer;
    NSMutableArray *_outstandingTasks;
    NSMutableSet *_notReallyChanged;
    NSObject<OS_dispatch_queue> *_sync_queue;
}

@property (retain) NSTask *syncTask;
@property (readonly) NSURL *calendarCacheURL;
@property BOOL databaseReset;
@property (readonly) BOOL syncEnabled;
@property (readonly) BOOL trackingEnabled;
@property (readonly) NSArray *syncArgs;
@property (readonly) NSString *syncToolPath;

+ (id)defaultMonitor;
+ (BOOL)syncServicesAvailable;

- (void)dealloc;
- (id)init;
- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (id)changeTracker;
- (void)beginningDatabaseReset;
- (void)finishedDatabaseReset;
- (id)threadChangeTracker;
- (void)forceSyncByAppNotification:(id)a0;
- (void)invalideTimeOnMainThread;
- (void)syncNowWithRefresh:(BOOL)a0;
- (void)periodicSync;
- (BOOL)_syncingWithOtherClients;
- (void)beginningDatabaseReset:(BOOL)a0;
- (void)cancelSyncing;
- (void)_doSyncProcessDied:(id)a0;
- (void)_agentSyncWithArgs:(id)a0 shouldDelay:(BOOL)a1;
- (void)checkAgainstCommittedValues:(id)a0;
- (BOOL)changeIsOfInterest:(id)a0 trueUpdates:(id)a1;
- (void)scheduleTimerOnMainThread:(id)a0;
- (void)disableSyncingAndChangeTracking;
- (void)beginningDatabaseMigration;
- (void)launchSyncWithArgs:(id)a0 shouldDelay:(BOOL)a1;
- (void)doSlowSync;
- (void)setiCalSyncRefreshMode;
- (void)finishedDatabaseMigration:(BOOL)a0;

@end
