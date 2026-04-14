@interface FCTime : NSObject {
    int _hour;
    int _minute;
    int _second;
}

+ (id)timeWithString:(id)a0;
+ (id)midnight;

- (id)dateValue;
- (long long)compare:(id)a0;
- (id)stringValue;
- (id)initWithString:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)seconds;
- (id)dateValueForDate:(id)a0;
- (id)initWithHour:(int)a0 minute:(int)a1 second:(int)a2;
- (id)justAfter;
- (id)justBefore;

@end
