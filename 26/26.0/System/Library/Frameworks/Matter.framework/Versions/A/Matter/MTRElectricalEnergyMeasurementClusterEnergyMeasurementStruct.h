@class NSNumber;

@interface MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *energy;
@property (copy, nonatomic) NSNumber *startTimestamp;
@property (copy, nonatomic) NSNumber *endTimestamp;
@property (copy, nonatomic) NSNumber *startSystime;
@property (copy, nonatomic) NSNumber *endSystime;
@property (copy, nonatomic) NSNumber *apparentEnergy;
@property (copy, nonatomic) NSNumber *reactiveEnergy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
