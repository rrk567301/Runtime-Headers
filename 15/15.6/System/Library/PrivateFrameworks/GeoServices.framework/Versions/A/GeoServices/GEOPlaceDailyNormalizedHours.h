@class NSArray;

@interface GEOPlaceDailyNormalizedHours : NSObject

@property (readonly, nonatomic) long long weekday;
@property (readonly, nonatomic) NSArray *localTimeIntervals;
@property (nonatomic) double closingSoonThresholdSeconds;
@property (nonatomic) double openingSoonThresholdSeconds;
@property (readonly, nonatomic) char openToMidnight;
@property (readonly, nonatomic) char openFromMidnight;

+ (id)dailyNormalizedHoursForWeekday:(long long)a0 timeIntervals:(id)a1 closingThreshold:(double)a2 openingThreshold:(double)a3 openToMidnight:(char)a4 openFromMidnight:(char)a5;
+ (long long)getWeekdayForDate:(id)a0 inNormalizedHours:(id)a1 timeZone:(id)a2;
+ (long long)todaysWeekday:(long long)a0 yesterdaysWeekday:(long long)a1 containsTimeFromMidnight:(double)a2 inNormalizedHours:(id)a3;

- (id)description;
- (void).cxx_destruct;

@end
