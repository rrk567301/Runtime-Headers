@interface CALFloatingDateTime : CALDate

+ (id)date;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5;
+ (id)timeOnlyWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 second:(unsigned long long)a2;

- (id)description;
- (long long)compare:(id)a0;
- (void)setTimeZone:(id)a0;
- (double)timeIntervalSinceNow;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5;
- (id)NSDate;
- (id)representationID;
- (void)setYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (BOOL)meetComparisonCondition:(unsigned char)a0 withDate:(id)a1;
- (long long)offsetFromGMT;
- (id)NSDateWithTimeZone:(id)a0;
- (id)NSCalendarDate;
- (void)addYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (id)NSDateWithGMT;
- (long long)offsetFromGMTForTimeZone:(id)a0;
- (void)setTimeZone:(id)a0 keepingLocalDate:(BOOL)a1;
- (void)roundToDay;
- (void)addSecondsInGMT:(long long)a0;
- (void)takeValueFrom:(id)a0;
- (BOOL)isEqualAsDateOnly:(id)a0;
- (void)setYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5;
- (void)fillComparisonCDate:(struct _CALCDate { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; } *)a0 forDate:(id)a1;
- (id)NSDateWithCalendar:(id)a0;

@end
