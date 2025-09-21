@class NSDateInterval;

@interface RTTripSegmentMetadataFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly) char fetchRoadClass;
@property (readonly) char fetchFormOfWay;
@property (readonly) char fetchLocationType;
@property (readonly) char fetchPreferredNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTripSegment:(id)a0;
- (char)isEqualToFetchOptions:(id)a0;
- (id)initWithDateInterval:(id)a0 fetchRoadClass:(char)a1 fetchFormOfWay:(char)a2 fetchLocationType:(char)a3 fetchPreferredNames:(char)a4;
- (id)initWithTripSegment:(id)a0 fetchRoadClass:(char)a1 fetchFormOfWay:(char)a2 fetchLocationType:(char)a3 fetchPreferredNames:(char)a4;

@end
