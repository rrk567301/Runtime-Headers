@class CNContactStore, CNContact, NSMutableSet, CLSCalendarEventsCache;

@interface CLSSocialServiceCalendar : CLSSocialService {
    CNContactStore *_contactStore;
    CNContact *_meContact;
    CLSCalendarEventsCache *_calendarEventsCache;
    NSMutableSet *_prefetchedDateIntervals;
}

+ (char)_isCalendarRelevant:(id)a0;
+ (char)_isEventInMeetingRoom:(id)a0;
+ (char)eventAtLocation:(id)a0 withAttendeeNames:(id)a1 matchesClueCollection:(id)a2;
+ (id)relevantCalendars:(id)a0;
+ (char)shouldKeepEvent:(id)a0 withClueCollection:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)meContact;
- (id)eventsForDates:(id)a0;
- (id)personsFromEventParticipants:(id)a0 excludeCurrentUser:(char)a1 serviceManager:(id)a2;
- (void)_enumerateEventsFromDate:(id)a0 toDate:(id)a1 fetchIfNeeded:(char)a2 usingBlock:(id /* block */)a3;
- (id)_fullNameWithContact:(id)a0;
- (char)_hasAlreadyPrefetchedEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1;
- (char)_sortedAssetCollections:(id)a0 containsEvent:(id)a1;
- (void)enumerateEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 usingBlock:(id /* block */)a2;
- (id)eventFromProxyEvent:(id)a0;
- (id)eventsForClueCollection:(id)a0;
- (void)invalidateMemoryCaches;
- (void)prefetchEventsFromUniversalDate:(id)a0 toUniversalDate:(id)a1 forAssetCollectionsSortedByStartDate:(id)a2 usingBlock:(id /* block */)a3;
- (id)workCalendarEventsMatchingContactIdentifiers:(id)a0 fromUniversalDate:(id)a1 toUniversalDate:(id)a2 contactsService:(id)a3;

@end
