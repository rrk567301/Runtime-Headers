@class MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct;

@interface MTRElectricalEnergyMeasurementClusterPeriodicEnergyMeasuredEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyImported;
@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyExported;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
