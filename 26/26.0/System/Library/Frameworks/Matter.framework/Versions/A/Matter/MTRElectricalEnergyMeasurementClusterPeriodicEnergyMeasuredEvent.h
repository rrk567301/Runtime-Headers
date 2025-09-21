@class MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct;

@interface MTRElectricalEnergyMeasurementClusterPeriodicEnergyMeasuredEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyImported;
@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyExported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
