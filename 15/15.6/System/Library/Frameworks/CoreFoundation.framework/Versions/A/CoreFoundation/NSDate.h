@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) double timeIntervalSinceReferenceDate;

+ (char)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)_scriptingDateWithDescriptor:(id)a0;
+ (id)dateWithNaturalLanguageString:(id)a0;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;
+ (id)dateWithNaturalLanguageString:(id)a0 locale:(id)a1;
+ (id)dateForDaysSince1970:(int)a0;
+ (int)daysSince1970;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)dateWithTimeInterval:(double)a0 sinceDate:(id)a1;
+ (id)dateWithString:(id)a0;
+ (id)now;
+ (id)date;
+ (id)dateWithDate:(id)a0;
+ (id)dateWithTimeIntervalSince1970:(double)a0;
+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)a0;
+ (id)distantFuture;
+ (id)distantPast;
+ (double)timeIntervalSinceReferenceDate;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_scriptingDateDescriptor;
- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)a0;
- (char)_web_isToday;
- (id)dateWithCalendarFormat:(id)a0 timeZone:(id)a1;
- (id)descriptionWithCalendarFormat:(id)a0 timeZone:(id)a1 locale:(id)a2;
- (id)replacementObjectForPortCoder:(id)a0;
- (double)bucketToRoundingFactor:(unsigned int)a0;
- (double)timeIntervalSince1970WithBucket:(unsigned int)a0;
- (id)bs_dateByAddingDays:(long long)a0;
- (char)isAfterDate:(id)a0;
- (char)isBeforeDate:(id)a0;
- (int)daysSince1970;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isNSDate__;
- (double)timeIntervalSince1970;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (id)initWithString:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)addTimeInterval:(double)a0;
- (long long)compare:(id)a0;
- (long long)compare:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (id)dateByAddingTimeInterval:(double)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)earlierDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDate:(id)a0;
- (id)initWithTimeIntervalSince1970:(double)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (char)isEqual:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (char)isEqualToDate:(id)a0;
- (char)isInSameDayAsDate:(id)a0;
- (char)isInToday;
- (char)isInTomorrow;
- (char)isInYesterday;
- (id)laterDate:(id)a0;
- (double)timeIntervalSinceDate:(id)a0;
- (double)timeIntervalSinceNow;

@end
