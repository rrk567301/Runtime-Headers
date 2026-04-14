@class MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct;

@interface MTRElectricalEnergyMeasurementClusterPeriodicEnergyMeasuredEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyImported;
@property (copy, nonatomic) MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct *energyExported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
