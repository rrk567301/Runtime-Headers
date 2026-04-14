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
- (id)_calendar;
- (id)_dateFormatter;
- (void)assertionTaken:(id)a0 withClientDetails:(id)a1 lockState:(unsigned long long)a2;
- (void)_aggregateMetricsWithEnabled:(BOOL)a0 manuallyEnabled:(BOOL)a1 numberOfNewSessions:(int)a2 numberOfNewManualSessions:(int)a3 controlCenterPhone:(BOOL)a4 controlCenterWatch:(BOOL)a5 type:(id)a6 mode:(id)a7 dayOfWeek:(id)a8;
- (void)sendMetricsHeartbeatsIfNeeded;
- (void)_sendDailyHeartbeatIfNeeded;
- (void)_sendWeeklyHeartbeatIfNeeded;
- (void)_sendMonthlyHeartbeatIfNeeded;
- (id)_metricsDayStringForDate:(id)a0;
- (id)_metricsWeekStringForDate:(id)a0;
- (id)_metricsMonthStringForDate:(id)a0;
- (void)_writeMetricsToStore:(id)a0;
- (id)_dateForYesterday;
- (id)_startOfWeekWithDate:(id)a0;
- (id)_startOfLastWeek;
- (id)_startOfMonthWithDate:(id)a0;
- (id)_startOfLastMonth;

@end
