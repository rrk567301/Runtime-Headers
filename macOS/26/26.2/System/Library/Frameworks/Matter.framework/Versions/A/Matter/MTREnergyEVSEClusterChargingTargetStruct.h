@class NSNumber;

@interface MTREnergyEVSEClusterChargingTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *targetTimeMinutesPastMidnight;
@property (copy, nonatomic) NSNumber *targetSoC;
@property (copy, nonatomic) NSNumber *addedEnergy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
