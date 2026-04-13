@interface CaliTIPHandler : NSObject

+ (BOOL)didDelayWhenProcessing:(id)a0 principal:(id)a1 preferCalendar:(id)a2 withImportOptions:(unsigned long long)a3;
+ (void)process:(id)a0 preferCalendar:(id)a1 inManagedObjectContext:(id)a2 withImportOptions:(unsigned long long)a3;
+ (id)bestCalendarForInviteInCalendars:(id)a0 preferredCalendar:(id)a1 principal:(id)a2;
+ (void)process:(id)a0 principal:(id)a1 preferCalendar:(id)a2 delayFlag:(BOOL *)a3 inManagedObjectContext:(id)a4 withImportOptions:(unsigned long long)a5;
+ (void)process:(id)a0 principal:(id)a1 preferCalendar:(id)a2 delayFlag:(BOOL *)a3 inManagedObjectContext:(id)a4 withPrefetchDictionary:(id)a5 withImportOptions:(unsigned long long)a6;
+ (BOOL)scheduleWithCalendarItem:(id)a0 changeRequest:(id *)a1;
+ (BOOL)markAsScheduleAgentClientForEvent:(id)a0;
+ (BOOL)scheduleWithCalendarItem:(id)a0;
+ (BOOL)diffsAreImportant:(id)a0;
+ (BOOL)shouldMarkAsScheduleAgentClientForCalendar:(id)a0 forMaster:(id)a1 forMessage:(id)a2;
+ (void)markAsScheduleAgentClient:(id)a0;
+ (id)diffForAttendeeAddress:(id)a0;
+ (id)diffsFromCalDAVOccurrenceChange:(id)a0;
+ (id)resourceUpdatedDiffsFromCalDAVOccurrenceChange:(id)a0;
+ (void)deleteAndCreateChangeRequestForMessage:(id)a0 principal:(id)a1 context:(id)a2;
+ (id)debugStringForEvent:(id)a0;
+ (id)masterEventWithSharedUID:(id)a0 principal:(id)a1 inManagedObjectContext:(id)a2 withPrefetchDictionary:(id)a3;
+ (id)preProcessRequestOccurrences:(id)a0 forEvent:(id)a1 principal:(id)a2;
+ (id)myAddressInPrincipal:(id)a0 forEvent:(id)a1;
+ (BOOL)requestForEvent:(id)a0 withOccurrences:(id)a1 inMessage:(id)a2 masterEvent:(id)a3 delayFlag:(BOOL *)a4 principal:(id)a5 preferCalendar:(id)a6 inManagedObjectContext:(id)a7 withPrefetchDictionary:(id)a8 withImportOptions:(unsigned long long)a9;
+ (BOOL)replyForEvent:(id)a0 inMessage:(id)a1 masterEvent:(id)a2 principal:(id)a3;
+ (BOOL)validateOrganizerMatches:(id)a0 managedEvent:(id)a1;
+ (BOOL)cancelEvent:(id)a0 inMessage:(id)a1 masterEvent:(id)a2 principal:(id)a3 withPrefetchDictionary:(id)a4;
+ (id)managedEventForEvent:(id)a0 inCalendar:(id)a1 withMaster:(id)a2 withPrefetchDictionary:(id)a3;
+ (BOOL)isAddressMe:(id)a0 forPrincipal:(id)a1;
+ (id /* block */)iTIPCompletionBlockForPrincipal:(id)a0 context:(id)a1;
+ (void)insertChangeRequestForEvent:(id)a0 type:(int)a1 context:(id)a2;
+ (id)getOccurrenceChange:(id)a0 forEvent:(id)a1 inCalendar:(id)a2;
+ (void)setReply:(int)a0 onEvent:(id)a1 forAddress:(id)a2;
+ (int)getChangesFromScheduleChanges:(id)a0 event:(id)a1 calendar:(id)a2 managedEvent:(id)a3;
+ (id)getChanges:(int *)a0 forIncomingEvent:(id)a1 withOccurrences:(id)a2 onCalendar:(id)a3 managedEvent:(id)a4 masterEvent:(id)a5 principal:(id)a6 attendee:(id)a7 inManagedObjectContext:(id)a8;
+ (BOOL)doScheduleChanges:(id)a0 applyToEvent:(id)a1 inCalendar:(id)a2;
+ (id)calculateDiffsForEvent:(id)a0 inMessage:(id)a1 managedEvent:(id)a2;
+ (id)calculateDiffsForEvent:(id)a0;
+ (id)calculateDiffsForEvent:(id)a0 changedProperties:(id)a1;
+ (void)process:(id)a0 principal:(id)a1 inManagedObjectContext:(id)a2 withImportOptions:(unsigned long long)a3;
+ (BOOL)cancelEvent:(id)a0 inMessage:(id)a1 masterEvent:(id)a2 principal:(id)a3;

@end
