@class NSDate;

@interface CalTask : CalCalendarItem

@property (copy) NSDate *dueDate;
@property unsigned long long priority;
@property BOOL isCompleted;
@property (copy) NSDate *completedDate;

+ (id)task;
+ (id)taskFromRemoteManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)remoteManagedTaskFromTask;
- (id)initWithTitle:(id)a0 UID:(id)a1;
- (id)nextAlarmDate;

@end
