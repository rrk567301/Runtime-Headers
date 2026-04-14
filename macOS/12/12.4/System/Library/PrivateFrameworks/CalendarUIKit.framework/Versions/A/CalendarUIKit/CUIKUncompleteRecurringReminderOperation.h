@class EKReminder;

@interface CUIKUncompleteRecurringReminderOperation : CUIKSaveOperation

@property (retain) EKReminder *previouslyCompletedRecurringReminder;

- (void).cxx_destruct;
- (BOOL)_execute:(id *)a0;
- (Class)_inverseOperationClass;
- (id)_objectsForInverse;
- (void)_storePreviousState;
- (id)_previouslyCompletedReminderForReminder:(id)a0;

@end
