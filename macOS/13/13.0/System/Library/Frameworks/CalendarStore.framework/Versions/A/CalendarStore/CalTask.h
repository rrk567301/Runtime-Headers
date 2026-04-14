@class NSDate, EKReminder;

@interface CalTask : CalCalendarItem

@property (retain, nonatomic) EKReminder *ekReminder;
@property (copy) NSDate *dueDate;
@property unsigned long long priority;
@property BOOL isCompleted;
@property (copy) NSDate *completedDate;

+ (id)task;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)nextAlarmDate;
- (void)setEKReminder:(id)a0;

@end
