@class CALNNotificationStorageWrapper, CALNInboxNotificationMonitor, CALNNotificationServer, EKEventStore, CALNSchedulingSnoozeUpdateTimer, EKEphemeralCacheEventStoreProvider, CALNNotificationSourceRefresher, CALNTriggeredEventNotificationSource, NSString, CALNTriggeredEmailHandler, CALNUNIconProvider, NSArray, CALNTriggeredURLHandler;

@interface CALNNotificationServerModule : NSObject <CADModule> {
    EKEphemeralCacheEventStoreProvider *_eventStoreProvider;
    EKEventStore *_lastCreatedEventStore;
}

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) CALNTriggeredEmailHandler *triggeredEmailHandler;
@property (readonly, nonatomic) CALNTriggeredURLHandler *triggeredURLHandler;
@property (readonly, nonatomic) CALNNotificationServer *calendarNotificationServer;
@property (readonly, nonatomic) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (readonly, nonatomic) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;
@property (readonly, nonatomic) CALNUNIconProvider *iconProvider;
@property (readonly, nonatomic) CALNSchedulingSnoozeUpdateTimer *snoozeUpdateTimer;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_unprotectedCalendarNotificationStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)a0;
+ (id)_protectedTriggeredEventNotificationDataStorage;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)a0;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_unprotectedTriggeredEventNotificationDataStorage;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)a0;
+ (id)_createNotificationStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)a0;
+ (void)_migrateNotificationFilesFromDirectory:(id)a0 toDirectory:(id)a1;
+ (id)_notificationStoragePathWithName:(id)a0;
+ (id)_filesToMigrate;
+ (void)_migrateNotificationFiles;
+ (id)_timeToLeaveRefreshStorage;

- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)a0 intoProtectedStorage:(id)a1 withStorageWrapper:(id)a2 forNotificationServer:(id)a3;
- (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)_reloadNotificationsAfterFirstUnlock;
- (id)_createNotificationServerWithUserNotificationCenter:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)_registerSettingsCaptureHandlers;
- (id)_createNotificationSourcesWithNotificationManager:(id)a0 eventStoreProvider:(id)a1 inboxNotificationProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (id)init;
- (void)_reloadNotificationRecords:(id)a0 forNotificationServer:(id)a1;
- (void)updateIconsToNewVersionIfNeeded;
- (void)_removeNotificationsFromUnprotectedStorage:(id)a0;
- (void)_reloadTriggeredEventNotificationData;
- (void)deactivate;
- (void)_updateLocaleReloadIfDifferent:(BOOL)a0;
- (void)activate;
- (void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)a0;
- (void).cxx_destruct;

@end
