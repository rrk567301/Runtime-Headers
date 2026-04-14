@class NSNumber;

@interface MTRThermostatClusterScheduleTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *numberOfSchedules;
@property (copy, nonatomic) NSNumber *scheduleTypeFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
