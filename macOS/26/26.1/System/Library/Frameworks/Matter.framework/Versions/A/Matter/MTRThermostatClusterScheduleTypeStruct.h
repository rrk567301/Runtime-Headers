@class NSNumber;

@interface MTRThermostatClusterScheduleTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *numberOfSchedules;
@property (copy, nonatomic) NSNumber *scheduleTypeFeatures;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
