@class NSCalendar;

@interface HMDMetricsDateProvider : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) id /* block */ dateFactory;

- (id)init;
- (void).cxx_destruct;
- (id)startOfDayByAddingDayCount:(long long)a0;
- (id)startOfCurrentDay;
- (id)initWithDateFactory:(id /* block */)a0;
- (id)startOfDateByAddingDayCount:(long long)a0 toDate:(id)a1;
- (long long)daysFromDate:(id)a0 toDate:(id)a1;

@end
