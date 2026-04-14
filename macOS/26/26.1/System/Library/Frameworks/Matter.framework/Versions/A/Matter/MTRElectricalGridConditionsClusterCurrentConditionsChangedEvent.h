@class MTRElectricalGridConditionsClusterElectricalGridConditionsStruct;

@interface MTRElectricalGridConditionsClusterCurrentConditionsChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRElectricalGridConditionsClusterElectricalGridConditionsStruct *currentConditions;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
