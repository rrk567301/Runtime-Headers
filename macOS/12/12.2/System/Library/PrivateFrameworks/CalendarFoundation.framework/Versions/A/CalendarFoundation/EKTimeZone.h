@class NSString;

@interface EKTimeZone : NSObject <NSCopying> {
    NSString *_name;
    void *_internal;
    long long _lastStart;
    long long _lastEnd;
    unsigned long long _lastIndex;
    double _offset;
}

+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithNSTimeZone:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (void).cxx_destruct;
- (double)secondsFromGMTForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)initWithName:(id)a0;
- (id)abbreviation;
- (double)secondsFromGMT;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (id)initWithOffset:(double)a0 name:(id)a1;
- (id)abbreviationForAbsoluteTime:(double)a0;
- (unsigned long long)_indexForAbsoluteTime:(double)a0;
- (id)_abbreviationForIndex:(unsigned long long)a0;
- (id)NSTimeZone;

@end
