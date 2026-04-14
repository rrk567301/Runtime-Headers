@class HKSleepPeriod, NSCalendar, NSArray, NSString, NSDateInterval, HKSleepDaySummaryDurationStrategySet, HKSleepSchedule, HKSleepDaySummaryDurationCollection, HKQuantity;

@interface HKSleepDaySummary : NSObject <HKRedactedDescription, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying> {
    NSCalendar *_gregorianCalendar;
    NSArray *_periodDurations;
    HKSleepDaySummaryDurationCollection *_totalDurations;
    HKSleepDaySummaryDurationStrategySet *_strategies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long morningIndex;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSArray *periods;
@property (readonly, copy, nonatomic) NSArray *schedules;
@property (readonly, copy, nonatomic) HKSleepSchedule *primarySchedule;
@property (readonly, copy, nonatomic) HKQuantity *sleepDurationGoal;
@property (readonly, nonatomic) BOOL hasNonZeroSleepDurationGoal;
@property (readonly, copy, nonatomic) HKQuantity *minimumRecommendedSleepDurationGoal;
@property (readonly, nonatomic) double inBedDuration;
@property (readonly, nonatomic) double sleepDuration;
@property (readonly, nonatomic) double unspecifiedSleepDuration;
@property (readonly, nonatomic) double coreSleepDuration;
@property (readonly, nonatomic) double deepSleepDuration;
@property (readonly, nonatomic) double remSleepDuration;
@property (readonly, nonatomic) double awakeDuration;
@property (readonly, nonatomic) BOOL containsPeriodsWithAppleSleepTrackingData;
@property (readonly, nonatomic) BOOL hasSleepStageData;
@property (readonly, nonatomic) BOOL isWeeklyAggregatedSummary;
@property (readonly, nonatomic) HKSleepPeriod *lastSleepPeriod;
@property (readonly, nonatomic) HKSleepPeriod *primarySleepPeriod;
@property (readonly, copy, nonatomic) NSDateInterval *creationInterval;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_computeDurationsForPeriods:(id)a0 sleepDayInterval:(id)a1 strategies:(id)a2 periodDurations:(id *)a3;
+ (id)_computePeriodDurationsForPeriods:(id)a0 sleepDayInterval:(id)a1 strategies:(id)a2;
+ (id)_computeTotalDurationsFromPeriodDurations:(id)a0;
+ (id)daySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2 periods:(id)a3 schedules:(id)a4 sleepDurationGoal:(id)a5 minimumRecommendedSleepDurationGoal:(id)a6 creationInterval:(id)a7;
+ (id)emptyDaySummaryWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_recomputeDurationsForStrategy:(id)a0;
- (id)_updatingPeriods:(id)a0;
- (long long)bucketIndexForIntervalComponents:(id)a0 anchorDate:(id)a1;
- (id)durationsForStrategy:(id)a0;
- (id)durationsForStrategyType:(long long)a0;
- (BOOL)getData:(id *)a0 error:(id *)a1;
- (id)initWithMorningIndex:(long long)a0 dateInterval:(id)a1 calendar:(id)a2 periods:(id)a3 schedules:(id)a4 sleepDurationGoal:(id)a5 minimumRecommendedSleepDurationGoal:(id)a6 creationInterval:(id)a7;
- (id)primarySleepPeriodUsingSummaryDurationStrategyType:(long long)a0;
- (id)summaryFilteredToLastPeriod;
- (id)summaryFilteredToPrimaryPeriod;
- (id)summaryFilteredWithOptions:(unsigned long long)a0;
- (id)summaryFilteredWithOptions:(unsigned long long)a0 strategyType:(long long)a1;

@end
