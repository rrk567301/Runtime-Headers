@class NSNumber;

@interface MTRThermostatClusterOccupancyChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousOccupancy;
@property (copy, nonatomic) NSNumber *currentOccupancy;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
