@class NSNumber;

@interface MTRDoorLockClusterGetWeekDayScheduleParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *weekDayIndex;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
