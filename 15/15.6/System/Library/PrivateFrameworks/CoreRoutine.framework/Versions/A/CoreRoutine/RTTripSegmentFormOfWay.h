@class RTDistanceInterval, NSDateInterval;

@interface RTTripSegmentFormOfWay : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) RTDistanceInterval *distanceInterval;
@property (readonly, nonatomic) long long geoFormOfWay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 distanceInterval:(id)a1 geoFormOfWay:(long long)a2;

@end
