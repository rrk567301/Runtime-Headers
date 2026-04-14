@interface CALDateTime : CALDate

+ (id)date;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
+ (id)timeOnlyWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 second:(unsigned long long)a2 timeZone:(id)a3;

- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void)setTimeZone:(id)a0;
- (double)timeIntervalSinceNow;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;
- (id)representationID;
- (void)setYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (BOOL)meetComparisonCondition:(unsigned char)a0 withDate:(id)a1;
- (long long)offsetFromGMT;
- (void)addYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (long long)offsetFromGMTForTimeZone:(id)a0;
- (void)setTimeZone:(id)a0 keepingLocalDate:(BOOL)a1;
- (void)roundToDay;
- (void)addSecondsInGMT:(long long)a0;
- (void)takeValueFrom:(id)a0;
- (BOOL)isEqualAsDateOnly:(id)a0;
- (id)initAsTimeOnlyWithHour:(unsigned long long)a0 minute:(unsigned long long)a1 second:(unsigned long long)a2 timeZone:(id)a3;
- (id)initWithvCalDateString:(const char *)a0 withGlobalTZ:(id)a1;
- (id)initWithvCalDateString:(const char *)a0 withGlobalTZ:(id)a1 withCheck:(BOOL)a2;
- (id)NSCalendarDateForISync;

@end
