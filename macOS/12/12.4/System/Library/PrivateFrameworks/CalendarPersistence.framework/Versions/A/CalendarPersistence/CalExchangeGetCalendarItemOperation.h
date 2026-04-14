@interface CalExchangeGetCalendarItemOperation : CalExchangeGetItemOperation

+ (id)meetingTimeZonePropertyResponseShape;
+ (id)iCalendarPartipationStatusForResponseType:(long long)a0;
+ (id)_createOrUpdateLocation:(id)a0 inManagedObjectContext:(id)a1 withValue:(id)a2;

- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)a0 inSession:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)responseShape;
- (BOOL)_updateEvent:(id)a0 inCalendar:(id)a1 withCalendarItem:(id)a2 occurrences:(id)a3 masterCalendarItem:(id)a4 inContext:(id)a5 error:(id *)a6;
- (BOOL)createOrUpdateItems:(id)a0 inCalendar:(id)a1 inContext:(id)a2 error:(id *)a3;
- (BOOL)shouldInsertCalendarItem:(id)a0 existsEventWithSameSharedUID:(BOOL)a1 forPrincipal:(id)a2;
- (void)_updateAttendee:(id)a0 forEvent:(id)a1 name:(id)a2 address:(id)a3 responseType:(long long)a4 role:(id)a5 type:(int)a6;
- (void)_updateAttendee:(id)a0 forEvent:(id)a1 withAttendee:(id)a2 role:(id)a3 type:(int)a4;
- (id)_correctStartDateForItem:(id)a0 date:(id)a1 calendarInEventTimeZone:(id)a2 calendarInGMT:(id)a3;
- (void)_updateAttachmentsForEvent:(id)a0 inCalendar:(id)a1 withCalendarItem:(id)a2 masterCalendarItem:(id)a3;
- (void)_updateAttendeesForEvent:(id)a0 inCalendar:(id)a1 withCalendarItem:(id)a2 inContext:(id)a3;

@end
