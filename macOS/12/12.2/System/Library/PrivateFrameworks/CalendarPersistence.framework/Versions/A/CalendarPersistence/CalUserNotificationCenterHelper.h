@class CalAccumulatingQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CalUserNotificationCenterHelper : NSObject {
    NSObject<OS_dispatch_queue> *_postQueue;
    NSObject<OS_dispatch_queue> *_findQueue;
    CalAccumulatingQueue *_alarmScan;
}

+ (void)initialize;
+ (id)defaultHelper;

- (id)init;
- (void).cxx_destruct;
- (id)_calendarIDs;
- (void)_findAndScheduleUpcomingAlarms:(id)a0;
- (id)contextForNotificationCenter;
- (id)_alarmScanRange;
- (void)scheduleAlarms:(id)a0;
- (void)_scheduleAlarms:(id)a0;
- (void)_removeOldAlarms;
- (id)_datesToScheduleAlarm:(id)a0;
- (BOOL)_shouldAlarmFire:(id)a0 onScheduledDate:(id)a1 forOccurrenceDate:(id)a2;
- (BOOL)_isExpired:(id)a0;
- (void)_deleteAlarms:(id)a0;
- (void)dismissAlarm:(id)a0 withAckDate:(id)a1;
- (BOOL)_shouldAlarmExpire:(id)a0;
- (void)_sendMailAlarm:(id)a0;
- (void)_executeProcAlarm:(id)a0;
- (double)_calcSnoozeInterval:(id)a0;
- (id)_validateAlarmOccurringDate:(id)a0 withRespectToEventDate:(id)a1;
- (void)snoozeAlarm:(id)a0 withSnoozeInterval:(id)a1;
- (id)_calcDateWhenSnoozeAlarmOccurs:(id)a0 withInterval:(id)a1;
- (void)snoozeAlarm:(id)a0 withTriggerDate:(id)a1;
- (void)_acknowledgeAlarm:(id)a0 originalAlarm:(id)a1 deleteAlarm:(BOOL)a2 inContext:(id)a3 onDate:(id)a4;
- (void)deleteAlarms:(id)a0;
- (BOOL)_isEventOccurrenceOver:(id)a0 occurrenceDate:(id)a1 allowZeroDuration:(BOOL)a2;
- (BOOL)_doesAlarm:(id)a0 haveTriggerOnDate:(id)a1;
- (BOOL)_acknowledged:(id)a0 orAcknowledgedBeforeTriggerDate:(id)a1;
- (BOOL)_commonShouldEventBeShown:(id)a0 forOccurrenceDate:(id)a1;
- (BOOL)_doesEvent:(id)a0 haveOccurrenceOnDate:(id)a1;
- (BOOL)_isPrincipalOrAccountDisabledOrDelegate:(id)a0 forCalendar:(BOOL)a1;
- (void)findAndScheduleUpcomingAlarms:(id)a0;
- (void)deleteAllAlarms;
- (void)resolveBookmarks:(id)a0;
- (void)coalesceAlarmsFromNotification:(id)a0 forCenter:(id)a1;
- (void)expireNotifications:(id)a0;
- (void)fireAlarm:(id)a0;
- (void)snoozeAlarm:(id)a0;
- (void)dismissAlarm:(id)a0;
- (void)handleLocationChangeForRegion:(id)a0 type:(id)a1;
- (BOOL)_isEventOccurrenceTooFarInFuture:(id)a0 occurrenceDate:(id)a1;

@end
