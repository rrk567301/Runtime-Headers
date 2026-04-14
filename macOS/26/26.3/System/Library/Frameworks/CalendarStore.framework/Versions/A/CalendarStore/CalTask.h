@class NSDate, EKReminder;

@interface CalTask : CalCalendarItem

@property (retain, nonatomic) EKReminder *ekReminder;
@property (copy) NSDate *dueDate;
@property unsigned long long priority;
@property BOOL isCompleted;
@property (copy) NSDate *completedDate;

+ (id)task;

- (id)nextAlarmDate;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setEKReminder:(id)a0;

@end
