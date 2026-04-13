@interface CalCalendarStore : NSObject <CalendarAgentClient> {
    void *_reserved;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)authorizationStatusForServiceName:(struct __CFString { } *)a0;
+ (BOOL)requestAccessForServiceName:(struct __CFString { } *)a0;
+ (id)_calendarNotFoundWithCalendarName:(id)a0 isEvent:(BOOL)a1;
+ (id)_calendarNotEditableErrorWithCalendarName:(id)a0 isEvent:(BOOL)a1;
+ (id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)a0;
+ (int)_calStoreSpanWithCalSpan:(int)a0;
+ (id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)a0;
+ (id)_dateFromPotentialNSCalendarDate:(id)a0;
+ (id)defaultCalendarStore;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 UID:(id)a2 calendars:(id)a3;
+ (id)taskPredicateWithCalendars:(id)a0;
+ (id)taskPredicateWithTasksCompletedSince:(id)a0 calendars:(id)a1;
+ (id)taskPredicateWithUncompletedTasks:(id)a0;
+ (id)taskPredicateWithUncompletedTasksDueBefore:(id)a0 calendars:(id)a1;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)calendars;
- (id)notificationForDistributedNotification:(id)a0 userInfo:(id)a1;
- (void)calDavSharedUIDChanged:(id)a0;
- (void)calPersistanceNotification:(id)a0 userInfo:(id)a1;
- (void)agentUpdatedCache:(id)a0;
- (id)calendarWithUID:(id)a0;
- (id)eventsWithPredicate:(id)a0;
- (id)eventWithUID:(id)a0 occurrence:(id)a1;
- (id)tasksWithPredicate:(id)a0;
- (id)taskWithUID:(id)a0;
- (BOOL)saveEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (BOOL)removeEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (BOOL)saveTask:(id)a0 error:(id *)a1;
- (BOOL)removeTask:(id)a0 error:(id *)a1;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (void)calMeCardChanged;

@end
