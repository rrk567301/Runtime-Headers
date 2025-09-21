@class NSDate, EKReminder;

@interface CalTask : CalCalendarItem

@property (retain, nonatomic) EKReminder *ekReminder;
@property (copy) NSDate *dueDate;
@property unsigned long long priority;
@property char isCompleted;
@property (copy) NSDate *completedDate;

+ (id)task;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)nextAlarmDate;
- (void)setEKReminder:(id)a0;

@end
