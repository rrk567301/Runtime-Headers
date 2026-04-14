@class NSDictionary;

@interface MLModelExecutionSchedule : NSObject

@property (copy, nonatomic) NSDictionary *modelExecutionSchedule;
@property (copy, nonatomic) NSDictionary *modelExecutionScheduleByModelStructurePath;

- (void).cxx_destruct;
- (id)init;

@end
