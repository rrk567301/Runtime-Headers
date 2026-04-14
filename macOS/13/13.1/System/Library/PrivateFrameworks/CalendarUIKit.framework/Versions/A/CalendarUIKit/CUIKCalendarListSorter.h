@interface CUIKCalendarListSorter : NSObject

+ (id /* block */)ekSourceComparator;
+ (id /* block */)ekCalendarComparator;
+ (id /* block */)ekOtherCalendarComparator;
+ (long long)orderForOtherCalendar:(id)a0;

@end
