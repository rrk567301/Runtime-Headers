@class EKEventStore;

@interface CalCalendarStore : NSObject

@property (class, retain) CalCalendarStore *defaultCalendarStore;

@property (retain, nonatomic) EKEventStore *eventStore;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)requestAccessForEntityType:(unsigned long long)a0 eventStore:(id)a1;
+ (id)toEKCalendarsFromCalCalendars:(id)a0;
+ (id)_dateFromPotentialNSCalendarDate:(id)a0;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 UID:(id)a2 calendars:(id)a3;
+ (id)taskPredicateWithCalendars:(id)a0;
+ (id)taskPredicateWithTasksCompletedSince:(id)a0 calendars:(id)a1;
+ (id)taskPredicateWithUncompletedTasks:(id)a0;
+ (id)taskPredicateWithUncompletedTasksDueBefore:(id)a0 calendars:(id)a1;
+ (id)_calendarNotFoundWithCalendarName:(id)a0 isEvent:(BOOL)a1;
+ (id)_calendarNotEditableErrorWithCalendarName:(id)a0 isEvent:(BOOL)a1;
+ (id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)a0;
+ (id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0;
- (id)calendars;
- (id)calendarWithUID:(id)a0;
- (id)eventsWithPredicate:(id)a0;
- (id)eventWithUID:(id)a0 occurrence:(id)a1;
- (id)tasksWithPredicate:(id)a0;
- (id)taskWithUID:(id)a0;
- (void)handleUnsavedRelateToDictionaryWithCalendarItem:(id)a0;
- (long long)ekSpanFromCalSpan:(int)a0;
- (BOOL)saveEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (BOOL)removeEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (BOOL)saveTask:(id)a0 error:(id *)a1;
- (BOOL)removeTask:(id)a0 error:(id *)a1;
- (BOOL)availableCalendarTitle:(id)a0;
- (BOOL)availableCalendarTitle:(id)a0 forCalendar:(id)a1;
- (id)generateUntitledTitle;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;

@end
