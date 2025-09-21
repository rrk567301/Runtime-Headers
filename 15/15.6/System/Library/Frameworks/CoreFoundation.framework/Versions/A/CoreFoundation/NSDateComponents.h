@class NSDate, NSCalendar, NSTimeZone;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSCalendar *calendar;
@property (copy) NSTimeZone *timeZone;
@property long long era;
@property long long year;
@property long long month;
@property long long day;
@property long long hour;
@property long long minute;
@property long long second;
@property long long nanosecond;
@property long long weekday;
@property long long weekdayOrdinal;
@property long long quarter;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long yearForWeekOfYear;
@property long long dayOfYear;
@property (getter=isLeapMonth) char leapMonth;
@property (readonly, copy) NSDate *date;
@property (readonly, getter=isValidDate) char validDate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isSameDayAsComponents:(id)a0;
- (char)isSameMonthAsComponents:(id)a0;
- (char)isSameYearAsComponents:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (struct __CFDateComponents { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCalendar *x1; struct __CFTimeZone *x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; } *)_dateComponents;
- (id)_initWithCFDateComponents:(struct __CFDateComponents { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFCalendar *x1; struct __CFTimeZone *x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isLeapMonthSet;
- (char)isValidDateInCalendar:(id)a0;
- (void)setValue:(long long)a0 forComponent:(unsigned long long)a1;
- (void)setWeek:(long long)a0;
- (long long)valueForComponent:(unsigned long long)a0;
- (long long)week;

@end
