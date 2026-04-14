@interface FCTime : NSObject {
    int _hour;
    int _minute;
    int _second;
}

+ (id)timeWithString:(id)a0;
+ (id)midnight;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)stringValue;
- (long long)compare:(id)a0;
- (id)initWithString:(id)a0;
- (id)dateValue;
- (int)seconds;
- (id)initWithHour:(int)a0 minute:(int)a1 second:(int)a2;
- (id)dateValueForDate:(id)a0;
- (id)justBefore;
- (id)justAfter;

@end
