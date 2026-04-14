@class NSCalendar, NSDateFormatter;

@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateFormatter *formatter;
@property (readonly, nonatomic) id /* block */ dateFactory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDateFactory:(id /* block */)a0;
- (id)startOfCurrentDay;
- (id)startOfDayByAddingDayCount:(long long)a0;
- (id)startOfDateByAddingDayCount:(long long)a0 toDate:(id)a1;
- (long long)daysFromDate:(id)a0 toDate:(id)a1;
- (long long)dayNumberOfWeekForDate:(id)a0;
- (long long)currentDayNumberOfWeek;
- (id)startOfCurrentWeek;
- (id)startOfCurrentMonth;
- (id)startOfCurrentYear;

@end
