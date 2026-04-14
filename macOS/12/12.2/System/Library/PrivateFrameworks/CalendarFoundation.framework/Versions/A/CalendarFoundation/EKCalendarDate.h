@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    struct { int year; char month; char day; char hour; char minute; double second; } _dateGr;
    double _dateAbs;
    EKTimeZone *_timeZone;
    unsigned int _flags;
}

+ (id)calendarDateWithGregorianDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(id)a1;
+ (id)calendarDateWithDate:(id)a0 timeZone:(id)a1;
+ (id)calendarDateWithAbsoluteTime:(double)a0 timeZone:(id)a1;
+ (id)calendarDateWithDateComponents:(id)a0 timeZone:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)date;
- (id)earlierDate:(id)a0;
- (id)laterDate:(id)a0;
- (id)timeZone;
- (unsigned long long)year;
- (unsigned long long)month;
- (unsigned long long)day;
- (unsigned long long)hour;
- (unsigned long long)minute;
- (double)second;
- (unsigned long long)weekOfYear;
- (long long)secondsFromGMT;
- (int)dayOfWeek;
- (unsigned long long)dayOfYear;
- (id)components;
- (id)initWithAbsoluteTime:(double)a0 timeZone:(id)a1;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (id)initWithGregorianDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(id)a1;
- (id)initWithDateComponents:(id)a0 timeZone:(id)a1;
- (double)absoluteTime;
- (struct { int x0; char x1; char x2; char x3; char x4; double x5; })gregorianDate;
- (id)componentsIncludingTime:(BOOL)a0;
- (id)initWithGregorianDate:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 internalTimeZone:(id)a1;
- (id)calendarDateByAddingGregorianUnits:(struct { int x0; int x1; int x2; int x3; int x4; double x5; })a0;
- (struct { int x0; int x1; int x2; int x3; int x4; double x5; })differenceAsGregorianUnits:(id)a0 flags:(unsigned long long)a1;
- (id)calendarDateForWeekWithWeekStart:(int)a0 daysSinceWeekStart:(long long *)a1;
- (unsigned long long)daysInMonth;
- (id)initWithAbsoluteTime:(double)a0 internalTimeZone:(id)a1;
- (id)componentsWithoutTime;
- (id)calendarDateByAddingDays:(long long)a0;
- (id)calendarDateByAddingWeeks:(long long)a0;
- (id)calendarDateByAddingMonths:(long long)a0;
- (id)calendarDateByAddingYears:(long long)a0;
- (id)calendarDateInTimeZone:(id)a0;
- (id)calendarDateWithDate:(id)a0;
- (struct { int x0; int x1; int x2; int x3; int x4; double x5; })differenceAsCalGregorianUnits:(id)a0 flags:(unsigned long long)a1;
- (long long)differenceInYears:(id)a0;
- (long long)differenceInMonths:(id)a0;
- (long long)differenceInDays:(id)a0;
- (double)differenceInSeconds:(id)a0;
- (unsigned long long)daysInYear;
- (unsigned long long)weeksInYear;
- (id)calendarDateForDay;
- (id)calendarDateForEndOfDay;
- (id)calendarDateForWeekWithWeekStart:(int)a0;
- (id)calendarDateForEndOfWeekWithWeekStart:(int)a0;
- (id)calendarDateForMonth;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForYear;

@end
