@interface QLMediaUIValueTiming : NSObject <NSCoding, NSCopying>

@property (readonly) double anchorValue;
@property (readonly) double anchorTimeStamp;
@property (readonly) double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (double)currentTimeStamp;
+ (id)valueTimingWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;

- (struct { double x0; double x1; })_timing;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (Class)classForCoder;
- (double)currentValue;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (double)valueForTimeStamp:(double)a0;
- (id)initWithValueTiming:(id)a0;
- (BOOL)isEqualToValueTiming:(id)a0;
- (double)timeStampForValue:(double)a0;

@end
