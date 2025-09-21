@class NSCalendar, HDProfile, NSDateInterval, NSMutableArray;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepDaySummaryBuilder : NSObject {
    HDProfile *_profile;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
    struct { long long start; long long duration; } _dayIndexRange;
    NSDateInterval *_dateInterval;
    unsigned long long _weekday;
    NSCalendar *_gregorianCalendar;
    unsigned long long _options;
    char _containsAsleepOrInBedData;
    NSMutableArray *_sleepAnalysisSamples;
    NSMutableArray *_sleepScheduleSamples;
    NSMutableArray *_sleepDurationGoalSamples;
}

@property (readonly, nonatomic) long long morningIndex;
@property (readonly, nonatomic) long long numberOfDays;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSCalendar *calendar;

+ (id)dateIntervalForDayIndexRange:(struct { long long x0; long long x1; })a0 gregorianCalendar:(id)a1;

- (void).cxx_destruct;
- (void)addOrderedSample:(id)a0;
- (id)applicableSleepSchedules;
- (id)createDaySummary;
- (id)initWithProfile:(id)a0 dayIndexRange:(struct { long long x0; long long x1; })a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 gregorianCalendar:(id)a4 sourceOrderProvider:(id)a5;
- (id)initWithProfile:(id)a0 morningIndex:(long long)a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 gregorianCalendar:(id)a4 sourceOrderProvider:(id)a5;
- (char)scheduleAppliesToWeekday:(id)a0;
- (id)sleepAnalysisSamples;
- (id)sleepDurationGoalSamples;
- (id)sleepScheduleSamples;

@end
