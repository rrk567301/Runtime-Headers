@class DNDSMutableMetricsRecord, NSCalendar, NSObject;
@protocol OS_dispatch_queue, DNDSBackingStore;

@interface DNDSMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _metricsBackingStore;
    DNDSMutableMetricsRecord *_metricsRecord;
    NSCalendar *_calendar;
}

- (void)assertionTaken:(id)a0 withClientDetails:(id)a1 lockState:(unsigned long long)a2;
- (void)_sendMonthlyHeartbeatIfNeeded;
- (id)_dateForYesterday;
- (id)_dateFormatter;
- (void)_sendDailyHeartbeatIfNeeded;
- (void)_aggregateMetricsWithEnabled:(BOOL)a0 manuallyEnabled:(BOOL)a1 numberOfNewSessions:(int)a2 numberOfNewManualSessions:(int)a3 controlCenterPhone:(BOOL)a4 controlCenterWatch:(BOOL)a5 type:(id)a6 mode:(id)a7 dayOfWeek:(id)a8;
- (id)_startOfLastWeek;
- (id)_startOfLastMonth;
- (void).cxx_destruct;
- (void)sendMetricsHeartbeatsIfNeeded;
- (id)_startOfWeekWithDate:(id)a0;
- (id)_metricsWeekStringForDate:(id)a0;
- (id)_metricsMonthStringForDate:(id)a0;
- (id)_metricsDayStringForDate:(id)a0;
- (id)_calendar;
- (id)init;
- (void)_writeMetricsToStore:(id)a0;
- (void)_sendWeeklyHeartbeatIfNeeded;
- (id)_startOfMonthWithDate:(id)a0;

@end
