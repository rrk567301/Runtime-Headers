@interface EKInMemoryBackingStore : EKBackingStore

+ (id)createNonPartialFrozenObjectForPartialObject:(id)a0 withFrozenClass:(Class)a1;

- (id)allEvents;
- (id)_allItems;
- (BOOL)shouldPermitOrganizerEmailFromJunkChecks:(id)a0;
- (BOOL)shouldPermitOrganizerPhoneNumberFromJunkChecks:(id)a0;
- (id)remindersWithCalendarIdentifiers:(id)a0;
- (id)allReminders;
- (void)refreshSources;
- (id)acquireDefaultCalendarForEntityType:(unsigned long long)a0;
- (id)defaultCalendarForEntityType:(unsigned long long)a0;
- (id)defaultCalendarForNewReminders;
- (void)setDefaultCalendarForNewEvents:(id)a0;
- (void)setDefaultCalendarForNewReminders:(id)a0;
- (id)suggestedEventCalendar;
- (id)naturalLanguageSuggestedEventCalendar;
- (id)eventsWithCalendarIdentifiers:(id)a0;
- (id)defaultCalendarForNewEvents;
- (id)remindersWithDueDatesInRange:(id)a0 withCalendarIdentifiers:(id)a1 withCompletion:(id)a2;
- (id)remindersWithIsCompleted:(BOOL)a0 maxResults:(unsigned long long)a1 withCalendarIdentifiers:(id)a2;
- (id)lookupItemsWithIdentifiers:(id)a0 type:(unsigned long long)a1;
- (id)lookupItemsWithExternalIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)_expandGeneralLookupPredicate:(id)a0;
- (id)_expandEventRangePredicate:(id)a0;
- (id)_expandEventRangePredicateReturningCounts:(id)a0;
- (BOOL)eventsExistOnCalendar:(id)a0;
- (BOOL)futureScheduledEventsExistOnCalendar:(id)a0;
- (BOOL)eventsMarkedScheduleAgentClientExistOnCalendar:(id)a0;
- (id)errorForCalendar:(id)a0;
- (id)_allEventsIncludingDetached:(BOOL)a0;
- (id)createNonPartialFrozenObjectPartialObject:(id)a0 withFrozenClass:(Class)a1;

@end
