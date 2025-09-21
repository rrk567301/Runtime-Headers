@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
    char noCalendarNoResult;
}

- (void).cxx_destruct;
- (char)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;
- (id)initForCalendarStoreWithCalendars:(id)a0;
- (id)initWithCalendars:(id)a0;
- (id)remListIDsWithAllLists:(id)a0;

@end
