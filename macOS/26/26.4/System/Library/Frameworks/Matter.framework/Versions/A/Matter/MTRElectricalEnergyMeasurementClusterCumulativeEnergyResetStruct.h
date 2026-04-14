@class NSNumber;

@interface MTRElectricalEnergyMeasurementClusterCumulativeEnergyResetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *importedResetTimestamp;
@property (copy, nonatomic) NSNumber *exportedResetTimestamp;
@property (copy, nonatomic) NSNumber *importedResetSystime;
@property (copy, nonatomic) NSNumber *exportedResetSystime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
