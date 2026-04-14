@class NSDictionary, NSString, MTUserNotificationActionDispatcher;
@protocol MTEventReporting;

@interface MTUserNotificationCenter : NSObject <MTNotificationCenter>

@property (retain, nonatomic) NSDictionary *notificationCenters;
@property (retain, nonatomic) MTUserNotificationActionDispatcher *actionHandler;
@property (weak, nonatomic) id<MTEventReporting> reportingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentForScheduledTimer:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
+ (id)_durationComponentsFormatter;
+ (id)_allIdentifiersForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
+ (id)userInfoForTimer:(id)a0;
+ (id)categoryForScheduledTimer:(id)a0;
+ (id)userInfoForAlarm:(id)a0;
+ (id)contentForScheduledAlarm:(id)a0;
+ (id)_goToBedIdentifier:(id)a0;
+ (id)_timeFormatter;
+ (void)_setSpecificContent:(id)a0 forScheduledAlarm:(id)a1;
+ (void)_setSpecificContent:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)launchURLForScheme:(id)a0;
+ (void)_setSnoozeCountdownTitleAndBody:(id)a0 forSnoozeCountdownNotification:(id)a1;
+ (id)_wakeUpAlarmStringForAlarm:(id)a0;
+ (id)categoryForScheduledAlarm:(id)a0;
+ (id)_allIdentifiersForAlarm:(id)a0;
+ (void)_setSpecificContent:(id)a0 forGoToBedNotification:(id)a1;
+ (id)_snoozeCountdownIdentifier:(id)a0;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)a0;
+ (id)notificationPrefixes;
+ (void)_setGoToBedTitleAndBody:(id)a0 forGoToBedNotification:(id)a1;
+ (void)_setSpecificContent:(id)a0 forNormalScheduledAlarm:(id)a1;
+ (id)requestIdentifierForScheduledAlarm:(id)a0;

- (void)removeAllDeliveredNotifications;
- (id)notificationCategories;
- (id)timerCategories;
- (void)dismissNotificationsForAlarm:(id)a0 dismissAction:(unsigned long long)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 content:(id)a1 completionBlock:(id /* block */)a2;
- (void)dismissNotificationsForTimer:(id)a0;
- (id)_notificationCenterForScheduledAlarm:(id)a0;
- (void)tearDownNotificationsForEventIdentifiers:(id)a0;
- (void)dismissNotificationsForAlarm:(id)a0;
- (void)registerActionHandler:(id)a0;
- (id)bedtimeCategories;
- (id)alarmCategories;
- (void)postBedtimeNotificationForAlarm:(id)a0 date:(id)a1;
- (void)postNotificationForScheduledAlarm:(id)a0 completionBlock:(id /* block */)a1;
- (void)dismissNotificationsWithIdentifiers:(id)a0;
- (void)setupNotificationCenter;
- (void)retrieveDelieveredNotificationForId:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)firingNotificationDestinations;
- (id)_notificationCenterForScheduledTimer;
- (void).cxx_destruct;
- (void)dismissNotificationsForAlarm:(id)a0 includeSnooze:(BOOL)a1;
- (void)postNotificationForScheduledTimer:(id)a0 completionBlock:(id /* block */)a1;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)a0;
- (unsigned long long)conditionalListDestination;
- (unsigned long long)conditionalLockScreenDestination;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1 includeSnooze:(BOOL)a2;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)a0;
- (void)registerAnalyticsDelegate:(id)a0;
- (unsigned long long)conditionalAlertDestination;
- (void)dismissNotificationsForAlarm:(id)a0 includeMainIdentifier:(BOOL)a1;
- (id)init;

@end
