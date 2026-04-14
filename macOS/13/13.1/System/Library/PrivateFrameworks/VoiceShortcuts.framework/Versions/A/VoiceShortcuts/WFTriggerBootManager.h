@class UNUserNotificationCenter, WFTriggerManager, NSString, NSObject;
@protocol WFDatabaseProvider, OS_dispatch_queue;

@interface WFTriggerBootManager : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)category;
+ (void)registerForNotificationRemovalWithUserNotificationCenter:(id)a0 scheduleIfNeeded:(BOOL)a1;
+ (void)clearNotificationsWithUserNotificationCenter:(id)a0;
+ (BOOL)markerFileExists;
+ (BOOL)createMarkerFileIfNeeded;
+ (BOOL)deleteMarkerFile;
+ (id)automationsEnabledFileURL;

- (void).cxx_destruct;
- (void)start;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDatabaseProvider:(id)a0;
- (void)registerForInitialBootXPCActivityWithUserNotificationCenterIfNeeded:(id)a0;
- (void)postNotificationWithUserNotificationCenterIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canRunAutomations;
- (BOOL)triggerRunningTimeoutHasPassed;
- (id)runningThresholdDate;
- (void)willRunAutomations;
- (void)deviceWasUnlockedForTheFirstTime;
- (void)configuredTriggersDidChange:(id)a0;
- (BOOL)shouldCreateMarkerFileWithConfiguredTriggers:(id)a0;
- (BOOL)createFirstUnlockTimeFile;
- (id)firstUnlockDate;
- (id)firstUnlockTimeURL;

@end
