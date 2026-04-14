@class NSNumber;

@interface MTRThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *daysToReturn;
@property (copy, nonatomic) NSNumber *modeToReturn;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
