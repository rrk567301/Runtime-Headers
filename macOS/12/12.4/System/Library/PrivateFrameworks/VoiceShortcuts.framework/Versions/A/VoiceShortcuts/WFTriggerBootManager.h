@class UNUserNotificationCenter, WFTriggerManager, NSString;
@protocol WFDatabaseProvider;

@interface WFTriggerBootManager : NSObject <UNUserNotificationCenterDelegate>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)category;
+ (void)registerForInitalBootXPCActivityWithUserNotificationCenterIfNeeded:(id)a0;
+ (void)registerForNotificationRemovalWithUserNotificationCenter:(id)a0;
+ (BOOL)markerFileExists;
+ (void)postNotificationWithUserNotificationCenter:(id)a0 completionHandler:(id /* block */)a1;
+ (void)registerForNotificationRemovalWithUserNotificationCenter:(id)a0 scheduleIfNeeded:(BOOL)a1;
+ (void)clearNotificationsWithUserNotificationCenter:(id)a0;
+ (BOOL)createMarkerFileIfNeeded;
+ (BOOL)deleteMarkerFile;
+ (id)automationsEnabledFileURL;

- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDatabaseProvider:(id)a0;
- (BOOL)triggerRunningTimeoutHasPassed;
- (id)runningThresholdDate;
- (id)firstUnlockDate;
- (BOOL)createFirstUnlockTimeFile;
- (void)configuredTriggersDidChange:(id)a0;
- (BOOL)shouldCreateMarkerFileWithConfiguredTriggers:(id)a0;
- (id)firstUnlockTimeURL;
- (BOOL)canRunAutomations;
- (void)willRunAutomations;
- (void)deviceWasUnlockedForTheFirstTime;

@end
