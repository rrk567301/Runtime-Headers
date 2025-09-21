@class NSCalendar, HDProfile, NSDateInterval, NSNumber, NSMutableArray;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDSleepDaySummaryBuilder : NSObject {
    HDProfile *_profile;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
    struct { long long start; long long duration; } _dayIndexRange;
    NSDateInterval *_dateInterval;
    unsigned long long _weekday;
    NSNumber *_eighteenthBirthdayDayIndex;
    NSCalendar *_gregorianCalendar;
    unsigned long long _options;
    BOOL _containsAsleepOrInBedData;
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
- (id)initWithProfile:(id)a0 dayIndexRange:(struct { long long x0; long long x1; })a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 eighteenthBirthdayDayIndex:(id)a4 gregorianCalendar:(id)a5 sourceOrderProvider:(id)a6;
- (id)initWithProfile:(id)a0 morningIndex:(long long)a1 weekday:(unsigned long long)a2 options:(unsigned long long)a3 eighteenthBirthdayDayIndex:(id)a4 gregorianCalendar:(id)a5 sourceOrderProvider:(id)a6;
- (BOOL)scheduleAppliesToWeekday:(id)a0;
- (id)sleepAnalysisSamples;
- (id)sleepDurationGoalSamples;
- (id)sleepScheduleSamples;

@end
