@interface CLSAutoupdatingCurrentCalendar : NSObject

+ (void)initialize;
+ (id)calendar;
+ (id)timezone;
+ (char)closestWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 afterDate:(id)a2;
+ (char)dateIntervalIntersectsWeekend:(id)a0;
+ (char)isWeekendDate:(id)a0;
+ (char)nextWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
+ (char)rangeOfWeekendLocalStartDate:(out id *)a0 interval:(out double *)a1 containingDate:(id)a2;

@end
