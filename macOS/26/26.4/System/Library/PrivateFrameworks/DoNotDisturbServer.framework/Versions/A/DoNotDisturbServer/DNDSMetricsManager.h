@class DNDSMutableMetricsRecord, NSCalendar, NSObject;
@protocol OS_dispatch_queue, DNDSBackingStore;

@interface DNDSMetricsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSBackingStore> _metricsBackingStore;
    DNDSMutableMetricsRecord *_metricsRecord;
    NSCalendar *_calendar;
}

- (void)_sendMonthlyHeartbeatIfNeeded;
- (void)_sendWeeklyHeartbeatIfNeeded;
- (id)_dateForYesterday;
- (void)sendMetricsHeartbeatsIfNeeded;
- (id)_metricsWeekStringForDate:(id)a0;
- (id)_startOfLastMonth;
- (void)_sendDailyHeartbeatIfNeeded;
- (void)_writeMetricsToStore:(id)a0;
- (void).cxx_destruct;
- (id)_startOfWeekWithDate:(id)a0;
- (id)_dateFormatter;
- (void)_aggregateMetricsWithEnabled:(BOOL)a0 manuallyEnabled:(BOOL)a1 numberOfNewSessions:(int)a2 numberOfNewManualSessions:(int)a3 controlCenterPhone:(BOOL)a4 controlCenterWatch:(BOOL)a5 type:(id)a6 mode:(id)a7 dayOfWeek:(id)a8;
- (id)init;
- (id)_startOfLastWeek;
- (id)_startOfMonthWithDate:(id)a0;
- (id)_metricsDayStringForDate:(id)a0;
- (id)_metricsMonthStringForDate:(id)a0;
- (id)_calendar;
- (void)assertionTaken:(id)a0 withClientDetails:(id)a1 lockState:(unsigned long long)a2;

@end
