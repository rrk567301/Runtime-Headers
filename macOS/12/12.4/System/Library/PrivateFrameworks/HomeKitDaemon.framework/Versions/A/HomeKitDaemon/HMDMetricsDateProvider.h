@class NSCalendar;

@interface HMDMetricsDateProvider : NSObject

@property (retain) NSCalendar *calendar;
@property (copy) id /* block */ dateFactory;

- (id)init;
- (void).cxx_destruct;
- (id)startOfDayByAddingDayCount:(long long)a0;
- (id)initWithCalendar:(id)a0 dateFactory:(id /* block */)a1;
- (id)startOfCurrentDay;

@end
