@class REMReminderChangeItem;

@interface REMReminderUrgentAlarmContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (nonatomic) BOOL isUrgentStateEnabledForCurrentUser;

- (void).cxx_destruct;
- (id)initWithReminderChangeItem:(id)a0;

@end
