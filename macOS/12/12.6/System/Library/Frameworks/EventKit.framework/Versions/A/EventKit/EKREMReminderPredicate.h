@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
}

- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)initWithCalendars:(id)a0;
- (id)remListIDsWithAllLists:(id)a0;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;

@end
