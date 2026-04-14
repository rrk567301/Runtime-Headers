@class NSNumber;

@interface MTREnergyEVSEClusterChargingTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *targetTimeMinutesPastMidnight;
@property (copy, nonatomic) NSNumber *targetSoC;
@property (copy, nonatomic) NSNumber *addedEnergy;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
