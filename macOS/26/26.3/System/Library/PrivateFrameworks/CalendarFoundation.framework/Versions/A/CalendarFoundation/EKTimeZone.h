@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithNSTimeZone:(id)a0;

- (id)initWithNSTimeZone:(id)a0;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)NSTimeZone;

@end
