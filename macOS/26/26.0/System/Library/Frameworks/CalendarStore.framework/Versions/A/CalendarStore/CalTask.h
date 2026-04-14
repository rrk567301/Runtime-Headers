@class NSDate, EKReminder;

@interface CalTask : CalCalendarItem

@property (retain, nonatomic) EKReminder *ekReminder;
@property (copy) NSDate *dueDate;
@property unsigned long long priority;
@property BOOL isCompleted;
@property (copy) NSDate *completedDate;

+ (id)task;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)nextAlarmDate;
- (void).cxx_destruct;
- (void)setEKReminder:(id)a0;

@end
