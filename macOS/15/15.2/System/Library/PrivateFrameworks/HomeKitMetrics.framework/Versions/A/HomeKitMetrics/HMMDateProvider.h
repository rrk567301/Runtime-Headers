@class NSCalendar, NSDate;

@interface HMMDateProvider : NSObject

@property (class, readonly, nonatomic) NSCalendar *gmtCalendar;
@property (class, readonly, nonatomic) HMMDateProvider *sharedInstance;

@property (readonly, nonatomic) NSCalendar *localCalendar;
@property (readonly, copy, nonatomic) NSDate *currentDate;

+ (id)startOfDayForDate:(id)a0;
+ (long long)daysFromDate:(id)a0 toDate:(id)a1;
+ (id)startOfDateByAddingDayCount:(long long)a0 toDate:(id)a1;
+ (id)startOfWeekForDate:(id)a0;
+ (id)calendarForTimeZone:(id)a0;
+ (id)dateFromYear:(long long)a0 month:(long long)a1 day:(long long)a2;
+ (long long)dayNumberOfWeekForDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (long long)currentDayNumberOfWeek;
- (long long)localHourOfDay;
- (id)startOfCurrentDay;
- (id)startOfCurrentWeek;
- (id)startOfDayByAddingDayCount:(long long)a0;
- (id)initWithLocalTimeZone:(id)a0;
- (id)startOfCurrentMonth;
- (id)startOfCurrentYear;

@end
