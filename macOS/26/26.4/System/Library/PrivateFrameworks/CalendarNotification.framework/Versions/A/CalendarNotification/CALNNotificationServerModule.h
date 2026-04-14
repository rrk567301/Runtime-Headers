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
+ (id)_timeToLeaveRefreshStorage;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)a0;
+ (id)_createNotificationStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_filesToMigrate;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)a0;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_protectedTriggeredEventNotificationDataStorage;
+ (void)_migrateNotificationFiles;
+ (id)_notificationStoragePathWithName:(id)a0;
+ (void)_migrateNotificationFilesFromDirectory:(id)a0 toDirectory:(id)a1;
+ (void)_setProtectedClassForStorageAtPath:(id)a0;
+ (id)_unprotectedTriggeredEventNotificationDataStorage;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)a0;

- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedNotificationNamed:(id)a0;
- (void)_updateLocaleReloadIfDifferent:(BOOL)a0;
- (void)activate;
- (void)updateIconsToNewVersionIfNeeded;
- (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)deactivate;
- (id)_createNotificationServerWithUserNotificationCenter:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)_registerSettingsCaptureHandlers;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)a0 intoProtectedStorage:(id)a1 withStorageWrapper:(id)a2 forNotificationServer:(id)a3;
- (void).cxx_destruct;
- (void)_reloadNotificationRecords:(id)a0 forNotificationServer:(id)a1;
- (void)_reloadNotificationsAfterFirstUnlock;
- (id)init;
- (void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)a0;
- (void)_reloadTriggeredEventNotificationData;
- (void)_removeNotificationsFromUnprotectedStorage:(id)a0;
- (id)_createNotificationSourcesWithNotificationManager:(id)a0 eventStoreProvider:(id)a1 inboxNotificationProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;

@end
