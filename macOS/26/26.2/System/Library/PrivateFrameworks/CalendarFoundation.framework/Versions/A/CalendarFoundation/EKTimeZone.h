@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithNSTimeZone:(id)a0;
+ (id)timeZoneWithName:(id)a0;

- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithNSTimeZone:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)NSTimeZone;
- (void).cxx_destruct;
- (id)description;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;

@end
