@class NSNumber, NSArray;

@interface MTREnergyEVSEClusterChargingTargetScheduleStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayOfWeekForSequence;
@property (copy, nonatomic) NSArray *chargingTargets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
