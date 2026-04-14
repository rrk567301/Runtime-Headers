@class NSCalendar, HKSPSleepEventTimelineResults, HKSPSleepScheduleModel, NSDate;

@interface HKSPSleepEventTimelineBuilder : NSObject

@property (readonly, nonatomic) HKSPSleepEventTimelineResults *results;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) unsigned long long options;

+ (id)builderWithSleepScheduleModel:(id)a0 date:(id)a1;

- (void)_adjustSessionForConfirmedWakeUp;
- (void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;
- (id)_windDownDateForBedtimeDate:(id)a0;
- (void)_adjustSessions;
- (void)_validateSessionAdjustments;
- (void)_gatherSessionsForOccurrence:(id)a0 overrideOccurrence:(id)a1;
- (id)initWithSleepScheduleModel:(id)a0 date:(id)a1;
- (void)_gatherSessions;
- (void)_addSessionToTimelineWithWakeUpDate:(id)a0 bedtimeDate:(id)a1 windDownDate:(id)a2 occurrence:(id)a3;
- (void).cxx_destruct;
- (void)_adjustSessionForSnoozedWakeUpAlarm;
- (void)_gatherSessionsForValidationForOccurrence:(id)a0 overrideOccurrence:(id)a1;
- (id)buildTimelineWithOptions:(unsigned long long)a0;

@end
