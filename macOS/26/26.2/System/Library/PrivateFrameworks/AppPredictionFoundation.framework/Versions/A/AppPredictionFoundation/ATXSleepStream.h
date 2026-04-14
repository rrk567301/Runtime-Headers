@interface ATXSleepStream : NSObject

- (id)backlightPublisherWithStartDate:(id)a0 endDate:(id)a1;
- (void)enumerateSleepEventsFromStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 block:(id /* block */)a3;
- (BOOL)hasAlreadyDetectedSleepEventOnGivenDay:(id)a0 sleepEvents:(id)a1 withCalendar:(id)a2;
- (BOOL)isFirstBacklightOnAfterWakeup:(id)a0 sleepStartTime:(id)a1 existingSleepEventsToday:(id)a2 withCalendar:(id)a3;
- (BOOL)isIdlePeriodLongEnough:(double)a0;
- (BOOL)isTimeInEligibleNotificationWindow:(id)a0 withCalendar:(id)a1;
- (id)screenLockedPublisherWithStartDate:(id)a0 endDate:(id)a1;

@end
