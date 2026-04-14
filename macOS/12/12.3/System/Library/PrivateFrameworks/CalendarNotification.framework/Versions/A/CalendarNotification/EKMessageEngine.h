@class NSArray, NSMutableDictionary;

@interface EKMessageEngine : EKNotificationEngine

@property (retain) NSMutableDictionary *allMessages;
@property unsigned long long calendarBadgeCount;
@property unsigned long long reminderBadgeCount;
@property unsigned long long lastDismissedCalendarCoalesceCount;
@property unsigned long long lastDismissedReminderCoalesceCount;
@property (retain) NSArray *coalescedSuggestionMessages;

+ (id)_actionIdentifiers;
+ (id)_mapMessages:(id)a0 passingFilter:(id /* block */)a1;
+ (BOOL)_shouldMessageBeShown:(id)a0;
+ (id)_identifierForMessage:(id)a0;
+ (BOOL)_messageIsForReminders:(id)a0;
+ (id)_notificationInfoForMessage:(id)a0;
+ (unsigned long long)_actionForMessage:(id)a0;
+ (id)_titleForAction:(unsigned long long)a0;
+ (BOOL)_shouldPerformActionOnDismiss:(unsigned long long)a0;
+ (id)_additionalActionsForMessage:(id)a0;
+ (id)_identifierForAction:(unsigned long long)a0;
+ (id)_actionsInPriorityOrder;
+ (unsigned long long)_actionForIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)_performAction;
- (id)_interestingNotifications;
- (BOOL)_handlesDismissalForType:(id)a0;
- (void)_handleDismissalForIdentifier:(id)a0 userInfo:(id)a1 dismissedAlert:(BOOL)a2;
- (BOOL)_handlesActivationForType:(id)a0;
- (void)_handleActivationForIdentifier:(id)a0 userInfo:(id)a1 clickActivation:(BOOL)a2 additionalActionClicked:(id)a3;
- (BOOL)_handlesExpirationForType:(id)a0;
- (void)_handleExpirationForIdentifiers:(id)a0;
- (BOOL)_contributesToCalendarBadgeCount;
- (void)_calendarBadgeCountWithReply:(id /* block */)a0;
- (BOOL)_contributesToRemindersBadgeCount;
- (void)_remindersBadgeCountWithReply:(id /* block */)a0;
- (void)_timerFiredWithLabel:(id)a0 performsQuickAction:(BOOL)a1;
- (void)_removeNotificationIdentifiers:(id)a0;
- (BOOL)_handlesType:(id)a0;
- (void)_loadMessagesFromEventStore;
- (BOOL)_isStringForCoalesced:(id)a0;
- (void)_updateMessagesAndBadges;
- (void)_updateBadgeCounts;
- (void)_updateMessages;
- (void)_scheduleMessageExpirationTimer;
- (void)_deliverMessages:(id)a0;
- (unsigned long long)_computeCalendarBadgeCount;
- (unsigned long long)_computeReminderBadgeCount;
- (void)_deliverCalendarMessages:(id)a0 reminderMessages:(id)a1;
- (BOOL)_messageShouldCoalesceForSuggestions:(id)a0;
- (BOOL)_shouldCoalesceMessage:(id)a0;
- (id)_notificationInfoForSuggestionMessages:(id)a0;
- (id)_notificationInfoForCoalescedMessageWithCount:(unsigned long long)a0 forCalendar:(BOOL)a1;
- (void)_performAction:(id)a0 forMessage:(id)a1;
- (void)_handleDismissalForCoalesced:(id)a0;
- (void)_handleDismissalOfNotification:(id)a0;
- (void)_handleActivationForCoalesced:(id)a0;
- (void)_performClickingActionForMessage:(id)a0;
- (void)_dismissCoalescedMessagesPassingTest:(id /* block */)a0;
- (void)_dismissCoalescedSuggestions;

@end
