@class NSNumber;

@interface MTRThermostatClusterOccupancyChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousOccupancy;
@property (copy, nonatomic) NSNumber *currentOccupancy;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
