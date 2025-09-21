@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {
    NSDate *_start;
    NSDate *_end;
    char _completed;
}

- (void).cxx_destruct;
- (char)evaluateWithObject:(id)a0;
- (id)initForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;
- (id)initForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;

@end
