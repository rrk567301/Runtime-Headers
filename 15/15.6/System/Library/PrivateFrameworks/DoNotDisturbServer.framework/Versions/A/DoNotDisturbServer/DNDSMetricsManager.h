@class DNDSMutableMetricsRecord, NSCalendar, NSObject;
@protocol OS_dispatch_queue, DNDSBackingStore;

@interface DNDSMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _metricsBackingStore;
    DNDSMutableMetricsRecord *_metricsRecord;
    NSCalendar *_calendar;
}

- (id)init;
- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)_calendar;
- (void)_aggregateMetricsWithEnabled:(char)a0 manuallyEnabled:(char)a1 numberOfNewSessions:(int)a2 numberOfNewManualSessions:(int)a3 controlCenterPhone:(char)a4 controlCenterWatch:(char)a5 type:(id)a6 mode:(id)a7 dayOfWeek:(id)a8;
- (id)_dateForYesterday;
- (id)_metricsDayStringForDate:(id)a0;
- (id)_metricsMonthStringForDate:(id)a0;
- (id)_metricsWeekStringForDate:(id)a0;
- (void)_sendDailyHeartbeatIfNeeded;
- (void)_sendMonthlyHeartbeatIfNeeded;
- (void)_sendWeeklyHeartbeatIfNeeded;
- (id)_startOfLastMonth;
- (id)_startOfLastWeek;
- (id)_startOfMonthWithDate:(id)a0;
- (id)_startOfWeekWithDate:(id)a0;
- (void)_writeMetricsToStore:(id)a0;
- (void)assertionTaken:(id)a0 withClientDetails:(id)a1 lockState:(unsigned long long)a2;
- (void)sendMetricsHeartbeatsIfNeeded;

@end
