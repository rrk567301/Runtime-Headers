@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithNSTimeZone:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithNSTimeZone:(id)a0;
- (id)NSTimeZone;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;

@end
