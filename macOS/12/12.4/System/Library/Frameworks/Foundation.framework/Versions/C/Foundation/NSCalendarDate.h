@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)distantFuture;
+ (id)distantPast;
+ (id)calendarDate;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;

- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (id)initWithString:(id)a0;
- (void)setTimeZone:(id)a0;
- (id)addTimeInterval:(double)a0;
- (id)timeZone;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)setCalendarFormat:(id)a0;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (id)calendarFormat;
- (id)descriptionWithCalendarFormat:(id)a0 locale:(id)a1;
- (id)initWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
- (id)timeZoneDetail;
- (long long)dayOfCommonEra;
- (long long)yearOfCommonEra;
- (long long)monthOfYear;
- (long long)dayOfMonth;
- (long long)dayOfWeek;
- (long long)dayOfYear;
- (long long)hourOfDay;
- (long long)minuteOfHour;
- (long long)secondOfMinute;
- (long long)microsecondOfSecond;
- (id)dateByAddingYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;
- (id)descriptionWithCalendarFormat:(id)a0;
- (id)initWithString:(id)a0 calendarFormat:(id)a1;

@end
