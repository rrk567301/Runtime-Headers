@class NSNumber;

@interface MTRDoorLockClusterGetYearDayScheduleResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *yearDayIndex;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *localStartTime;
@property (copy, nonatomic) NSNumber *localEndTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
