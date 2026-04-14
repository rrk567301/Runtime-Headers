@class NSNumber;

@interface MTRElectricalGridConditionsClusterElectricalGridConditionsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *periodStart;
@property (copy, nonatomic) NSNumber *periodEnd;
@property (copy, nonatomic) NSNumber *gridCarbonIntensity;
@property (copy, nonatomic) NSNumber *gridCarbonLevel;
@property (copy, nonatomic) NSNumber *localCarbonIntensity;
@property (copy, nonatomic) NSNumber *localCarbonLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
