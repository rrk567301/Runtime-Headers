@class NSObject, CalLimitingQueue, CalAgentMessageEngine, CalSignalSensor, NSXPCStoreServer, NSXPCConnection, CalMemorySensor;
@protocol OS_dispatch_queue, OS_dispatch_group, CalNCProtocol;

@interface CalAgent : NSObject <CalNetworkChangeNotificationListener, ICSLoggingDelegate> {
    CalLimitingQueue *_reloadQueue;
}

@property (retain, nonatomic) CalSignalSensor *signalHandler;
@property (retain, nonatomic) CalMemorySensor *memorySensor;
@property (retain, nonatomic) CalAgentMessageEngine *messageEngine;
@property (retain, nonatomic) NSXPCStoreServer *storeServer;
@property (retain, nonatomic) NSXPCConnection *calNCServiceConnection;
@property (retain, nonatomic) id<CalNCProtocol> remoteCalNCService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *reminderMigrationGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reminderMigrationQueue;
@property (nonatomic) BOOL remindersHaveBeenMigrated;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)start;
- (void)shutdown;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)logICSMessage:(id)a0 atLevel:(long long)a1;
- (void)systemNetworkDidChange;
- (void)_finishStartup;
- (void)setupCoreDataServer;
- (void)setUpSignalHandler;
- (void)verifyLaunchedByLaunchd;
- (void)setUpMemorySensor;
- (id)createReminderMigrationBlockingGroupIfNeeded;
- (void)setUpNotificationCenter;
- (void)setupAlarmScheduling;
- (void)setUpHTTPUserAgent;
- (void)setUpiCalendarPRODID;
- (void)setupReachabilityEvents;
- (void)updateNotificationIconCacheIfNecessary;
- (void)_loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)setupSBSAccounts;
- (void)setUpMessageEngine;
- (void)cleanPersistentHistoryEntries;
- (void)scheduleDailyTasks;
- (void)scheduleEveryOtherDayTasks;
- (void)loadNetworkObjectsAndSynchronizePropertiesWithPersistentStorage;
- (void)clearOldPersistentHistoryEntriesInContext:(id)a0;
- (void)clearFuturePersistentHistoryEntriesInContext:(id)a0;
- (void)pokeNCService;
- (void)_setupAlarmTimer;
- (void)_setupTimeChangeMonitor;
- (void)_setupNetworkChangeNotificationListener;
- (void)_searchForAlarms;
- (void)_tearDownNetworkChangeNotificationListener;
- (void)tearDownSignalHandler;
- (void)tearDownMemorySensor;
- (void)sendMessageToRemoteCalNCServiceWithRetry:(id /* block */)a0 onError:(id /* block */)a1;
- (unsigned long long)nextNodeOrder;

@end
