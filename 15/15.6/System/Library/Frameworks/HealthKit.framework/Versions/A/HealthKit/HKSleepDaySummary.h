@class HKSleepPeriod, NSCalendar, NSArray, NSString, NSDateInterval, _HKSleepDaySummaryDurations, HKSleepSchedule, HKQuantity;

@interface HKSleepDaySummary : NSObject <HKRedactedDescription, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSCalendar *gregorianCalendar;
@property (readonly, nonatomic) NSArray *periodDurations;
@property (readonly, nonatomic) _HKSleepDaySummaryDurations *totalDurations;
@property (readonly, nonatomic) long long morningIndex;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *periods;
@property (readonly, copy, nonatomic) NSArray *schedules;
@property (readonly, copy, nonatomic) HKSleepSchedule *primarySchedule;
@property (readonly, copy, nonatomic) HKQuantity *sleepDurationGoal;
@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double sleepDuration;
@property (readonly, nonatomic) double unspecifiedSleepDuration;
@property (readonly, nonatomic) double coreSleepDuration;
@property (readonly, nonatomic) double deepSleepDuration;
@property (readonly, nonatomic) double remSleepDuration;
@property (readonly, nonatomic) double awakeDuration;
@property (readonly, nonatomic) char containsPeriodsWithAppleSleepTrackingData;
@property (readonly, nonatomic) char hasSleepStageData;
@property (readonly, nonatomic) char isWeeklyAggregatedSummary;
@property (readonly, nonatomic) HKSleepPeriod *lastSleepPeriod;
@property (readonly, nonatomic) HKSleepPeriod *primarySleepPeriod;
@property (readonly, copy, nonatomic) NSDateInterval *creationInterval;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2 periods:(id)a3 schedules:(id)a4 sleepDurationGoal:(id)a5 creationInterval:(id)a6;
+ (id)emptyDaySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_computePeriodDurationsForPeriods:(id)a0 dateInterval:(id)a1;
- (id)_computeTotalDurationsFromPeriodDurations:(id)a0;
- (id)_filterToPeriod:(id)a0;
- (long long)bucketIndexForIntervalComponents:(id)a0 anchorDate:(id)a1;
- (char)getData:(id *)a0 error:(id *)a1;
- (id)initWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2 periods:(id)a3 schedules:(id)a4 sleepDurationGoal:(id)a5 creationInterval:(id)a6;
- (id)summaryFilteredToLastPeriod;
- (id)summaryFilteredToPrimaryPeriod;

@end
