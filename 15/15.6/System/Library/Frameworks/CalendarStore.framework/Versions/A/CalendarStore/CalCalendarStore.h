@class EKEventStore;

@interface CalCalendarStore : NSObject

@property (class, retain) CalCalendarStore *defaultCalendarStore;

@property (retain, nonatomic) EKEventStore *eventStore;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_calendarDoesNotSupportEventsErrorWithCalendarName:(id)a0;
+ (id)_calendarDoesNotSupportTasksErrorWithCalendarName:(id)a0;
+ (id)_calendarNotEditableErrorWithCalendarName:(id)a0 isEvent:(char)a1;
+ (id)_calendarNotFoundWithCalendarName:(id)a0 isEvent:(char)a1;
+ (id)_dateFromPotentialNSCalendarDate:(id)a0;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 UID:(id)a2 calendars:(id)a3;
+ (id)eventPredicateWithStartDate:(id)a0 endDate:(id)a1 calendars:(id)a2;
+ (char)requestAccessForEntityType:(unsigned long long)a0 eventStore:(id)a1;
+ (id)taskPredicateWithCalendars:(id)a0;
+ (id)taskPredicateWithTasksCompletedSince:(id)a0 calendars:(id)a1;
+ (id)taskPredicateWithUncompletedTasks:(id)a0;
+ (id)taskPredicateWithUncompletedTasksDueBefore:(id)a0 calendars:(id)a1;
+ (id)toEKCalendarsFromCalCalendars:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)calendars;
- (id)initWithEventStore:(id)a0;
- (char)saveTask:(id)a0 error:(id *)a1;
- (char)availableCalendarTitle:(id)a0;
- (char)availableCalendarTitle:(id)a0 forCalendar:(id)a1;
- (id)calendarWithUID:(id)a0;
- (long long)ekSpanFromCalSpan:(int)a0;
- (id)eventWithUID:(id)a0 occurrence:(id)a1;
- (id)eventsWithPredicate:(id)a0;
- (id)generateUntitledTitle;
- (void)handleUnsavedRelateToDictionaryWithCalendarItem:(id)a0;
- (char)removeCalendar:(id)a0 error:(id *)a1;
- (char)removeEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (char)removeTask:(id)a0 error:(id *)a1;
- (char)saveCalendar:(id)a0 error:(id *)a1;
- (char)saveEvent:(id)a0 span:(int)a1 error:(id *)a2;
- (id)taskWithUID:(id)a0;
- (id)tasksWithPredicate:(id)a0;

@end
