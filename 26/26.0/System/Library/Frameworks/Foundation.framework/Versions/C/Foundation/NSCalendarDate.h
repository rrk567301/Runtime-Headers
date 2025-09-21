@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)distantPast;
+ (BOOL)supportsSecureCoding;
+ (id)distantFuture;
+ (id)calendarDate;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;

- (long long)dayOfWeek;
- (void)setTimeZone:(id)a0;
- (long long)hourOfDay;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (long long)dayOfMonth;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (long long)dayOfYear;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)addTimeInterval:(double)a0;
- (long long)yearOfCommonEra;
- (id)calendarFormat;
- (id)dateByAddingYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (long long)dayOfCommonEra;
- (id)descriptionWithCalendarFormat:(id)a0;
- (id)descriptionWithCalendarFormat:(id)a0 locale:(id)a1;
- (id)initWithString:(id)a0 calendarFormat:(id)a1;
- (id)initWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (long long)microsecondOfSecond;
- (long long)minuteOfHour;
- (long long)monthOfYear;
- (long long)secondOfMinute;
- (void)setCalendarFormat:(id)a0;
- (id)timeZoneDetail;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;

@end
