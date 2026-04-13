@interface AVValueTiming : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double currentValue;
@property (readonly) double anchorValue;
@property (readonly) double anchorTimeStamp;
@property (readonly) double rate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)valueTimingWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
+ (double)currentTimeStamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; })_timing;
- (double)valueForTimeStamp:(double)a0;
- (BOOL)isEqualToValueTiming:(id)a0;
- (double)timeStampForValue:(double)a0;
- (id)initWithValueTiming:(id)a0;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;

@end
