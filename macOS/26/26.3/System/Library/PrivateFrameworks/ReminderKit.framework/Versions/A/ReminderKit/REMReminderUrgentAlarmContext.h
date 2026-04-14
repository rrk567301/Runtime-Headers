@class REMReminder;

@interface REMReminderUrgentAlarmContext : NSObject

@property (weak, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) BOOL isUrgentStateEnabledForCurrentUser;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
