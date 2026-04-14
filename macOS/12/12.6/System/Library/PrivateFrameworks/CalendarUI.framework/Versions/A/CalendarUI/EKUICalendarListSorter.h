@interface EKUICalendarListSorter : NSObject

+ (id /* block */)ekSourceComparator;
+ (long long)orderForOtherCalendar:(id)a0;
+ (id /* block */)ekCalendarComparator;
+ (id /* block */)ekOtherCalendarComparator;

@end
