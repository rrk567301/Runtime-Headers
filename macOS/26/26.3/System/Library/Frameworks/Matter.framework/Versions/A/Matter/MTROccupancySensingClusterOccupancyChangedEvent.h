@class NSNumber;

@interface MTROccupancySensingClusterOccupancyChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *occupancy;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
