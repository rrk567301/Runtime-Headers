@class NSDictionary;

@interface EKRemindersEngine : EKNotificationEngine

@property unsigned long long reminderBadgeCount;
@property (retain) NSDictionary *contactToRemindersCount;

+ (BOOL)shouldLogFor35464009;

- (void).cxx_destruct;
- (void)_performAction;
- (id)_interestingNotifications;
- (BOOL)_handlesDismissalForType:(id)a0;
- (void)_handleDismissalForIdentifier:(id)a0 userInfo:(id)a1 dismissedAlert:(BOOL)a2;
- (BOOL)_contributesToRemindersBadgeCount;
- (void)_remindersBadgeCountWithReply:(id /* block */)a0;
- (BOOL)_contributesToRemindersWithContactBadgeCount;
- (void)_remindersBadgeCountForContactIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_updateBadgeCount;
- (BOOL)_handlesType:(id)a0;
- (void)_completeReminderWithIdentifier:(id)a0 userInfo:(id)a1;
- (void)_acknowledgeAlarms:(id)a0 originalAlarmUID:(id)a1;
- (void)_updateOverdueReminderCount;
- (void)_findNumberOfOverDueReminders;
- (void)_scheduleNextRemindersBadgeUpdate;
- (void)_findRemindersWithContacts;
- (id)_actualDueDateForReminder:(id)a0;
- (id)_nextReminderDueDate;
- (id)_next9AMDateFromDate:(id)a0;
- (void)_updateContactRemindersCount;

@end
