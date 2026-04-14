@interface CALDateOnly : CALFloatingDateTime

+ (id)date;
+ (id)dateOnlyWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2;
+ (id)dateOnlyFromDate:(id)a0;

- (id)description;
- (id)dateByAddingYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (id)NSDate;
- (id)representationID;
- (void)setYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (void)addYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (id)dateByAddingRawInterval:(double)a0;
- (void)addSecondsInGMT:(long long)a0;
- (void)takeValueFrom:(id)a0;
- (id)NSCalendarDateForISync;

@end
