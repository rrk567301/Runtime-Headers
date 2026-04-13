@interface CalPersistence : NSObject

+ (void)initialize;
+ (id)databaseConnectionBeingEstablishedGroup;
+ (BOOL)isFullyInitialized;
+ (void)asyncConnectToPersistenceWithClientXPCWaitingOnGroup:(id)a0 completionBlock:(id /* block */)a1;
+ (BOOL)_configuredForUnitTesting;
+ (id)setupCalendarPersistence:(id)a0 andCreateDefaultCalendarsIfNeeded:(BOOL)a1;
+ (id)managedObjectContextForUser;
+ (id)defaultCalendarPersistence;
+ (id)userContextForLocalUID:(id)a0;
+ (BOOL)_shouldConnectUsingSQLite;
+ (BOOL)createDefaultLocalCalendarsForEventsIfNeeded:(id)a0 error:(id *)a1;
+ (BOOL)createDefaultLocalCalendarsForRemindersIfNeeded:(id)a0 error:(id *)a1;
+ (void)reconnectToPersistence;
+ (void)_createDefaultLocalCalendarsForEvents:(id)a0;
+ (BOOL)_saveContext:(id)a0 error:(id *)a1 errorDescriptionBlock:(id /* block */)a2 logTag:(id /* block */)a3;
+ (void)_createDefaultLocalCalendarsForReminders:(id)a0;
+ (id)setupCalendarPersistence:(id)a0 andCreateDefaultCalendarsIfNeeded:(BOOL)a1 withSetupGroup:(id)a2;
+ (BOOL)_startCoreDataXPCServer:(id *)a0;
+ (id)_createDefaultCalendarPersistenceSingleton;
+ (void)_startAgentLinkWithClientXPCWaitingOnGroup:(id)a0;
+ (id)_createXPCStoreWithNoSchemaMigration:(id *)a0;
+ (BOOL)_shouldForceTruthFileMigration;
+ (BOOL)createDefaultLocalCalendars:(id)a0 error:(id *)a1;
+ (BOOL)createBirthdayCalendar:(id)a0 error:(id *)a1;
+ (id)_createSQLiteStoreWithSchemaMigration:(id)a0 createDefaultCalendars:(BOOL)a1;
+ (void)enableFailOnExternalDatabaseReset;
+ (BOOL)upgradeIsInProgress;
+ (id)setupCalendarPersistence:(id)a0;
+ (void)_configureForUnitTesting;
+ (void)_allowTruthFileProcessingInUnitTests;
+ (void)_flushTruthFiles;
+ (void)asyncConnectToPersistence;
+ (void)forceTruthFileMigrationOnNextLaunch;

- (id)init;
- (void)_reset;
- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (void)postResetNotifications;
- (BOOL)isInterestedInContext:(id)a0;
- (void)_setSendsNotifications:(BOOL)a0;
- (void)postNotificationName:(id)a0 userInfo:(id)a1 context:(id)a2;
- (id)_URIsFromManagedObjects:(id)a0;
- (id)_notificationOriginatorIdWithContext:(id)a0;
- (void)_sendChangedFromRemoteContextNotification:(id)a0;
- (id)userInfosForManagedChangeNotification:(id)a0;
- (BOOL)_shouldSendRemoteNotification:(id)a0 checkOriginatorID:(BOOL)a1;
- (void)managedObjectsChangedFromRemoteContext:(id)a0;
- (void)calendarPersistenceChangedExternally:(id)a0;
- (id)_managedObjectContextForCurrentThread;
- (BOOL)_shouldSendRemoteNotification:(id)a0;

@end
