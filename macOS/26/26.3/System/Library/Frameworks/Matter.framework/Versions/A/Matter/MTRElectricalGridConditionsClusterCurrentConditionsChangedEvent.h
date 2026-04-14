@class MTRElectricalGridConditionsClusterElectricalGridConditionsStruct;

@interface MTRElectricalGridConditionsClusterCurrentConditionsChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalGridConditionsClusterElectricalGridConditionsStruct *currentConditions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
