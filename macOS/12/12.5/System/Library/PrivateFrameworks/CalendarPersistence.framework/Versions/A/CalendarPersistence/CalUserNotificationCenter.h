@class NSUserNotificationCenter, CalUserNotificationCenterCache;

@interface CalUserNotificationCenter : NSObject {
    NSUserNotificationCenter *_icalCenter;
    CalUserNotificationCenterCache *_icalCenterCache;
}

+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isScheduled:(id)a0;
- (void)resetCaches;
- (id)centerForAppID:(id)a0;
- (BOOL)isDisplayed:(id)a0;
- (BOOL)isDelivered:(id)a0;
- (BOOL)isSimilarDelivered:(id)a0;
- (BOOL)isSnoozeNotification:(id)a0;
- (id)cacheForAppID:(id)a0;
- (id)displayedNotificationsOfType:(id)a0 forApp:(id)a1;
- (id)scheduledNotificationsOfType:(id)a0 forApp:(id)a1;
- (id)deliveredNotificationsOfType:(id)a0 forApp:(id)a1;
- (void)removeScheduledAlarmWithID:(id)a0;
- (void)removeFiringAlarmWithID:(id)a0;
- (void)removeDeliveredAlarmWithID:(id)a0;
- (void)removeScheduledNotificationOfType:(id)a0 withID:(id)a1 forApp:(id)a2;
- (void)removeDisplayedNotificationOfType:(id)a0 withID:(id)a1 forApp:(id)a2;
- (void)removeDeliveredNotificationOfType:(id)a0 withID:(id)a1 forApp:(id)a2;
- (BOOL)isCorrectVersion:(id)a0;
- (BOOL)notification:(id)a0 isEqualToNotification:(id)a1;
- (BOOL)isRelevantNotification:(id)a0;
- (BOOL)scheduleAlarmNotification:(id)a0;
- (BOOL)fireAlarmNotification:(id)a0;
- (id)currentlyFiringAlarms;
- (id)currentlyScheduledAlarms;
- (id)currentlyDeliveredAlarms;
- (void)removeAlarmWithID:(id)a0;
- (void)removeNotificationsWithOldVersion;
- (void)addDeliveredNotifications:(id)a0 forAppID:(id)a1;

@end
