@class NSArray, NSDateInterval;

@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)totalSampleCount;
- (double)fractionOfValuesInSegmentAtIndex:(long long)a0;
- (id)initWithSegments:(id)a0 dateInterval:(id)a1;

@end
