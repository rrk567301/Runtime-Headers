@interface ATXTimeUtil : NSObject

+ (id)nextStartOfDayAfter:(id)a0 timeZone:(id)a1;
+ (id)getDayFromTime:(id)a0 timeZone:(id)a1;
+ (id)yesterdayWithTimeZone:(id)a0;
+ (id)getTimeFromDate:(id)a0;
+ (BOOL)time:(id)a0 isBetweenStartTime:(id)a1 andEndTime:(id)a2;
+ (id)todayWithTimeZone:(id)a0;

@end
