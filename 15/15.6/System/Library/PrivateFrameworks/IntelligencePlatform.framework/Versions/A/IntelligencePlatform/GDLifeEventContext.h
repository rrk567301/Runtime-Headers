@class _TtC20IntelligencePlatform24_GDSwiftLifeEventContext;

@interface GDLifeEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform24_GDSwiftLifeEventContext *gdSwiftContext;
}

- (id)context;
- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestActivityEventAndReturnError:(id *)a0;
- (id)earliestActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;
- (id)entryForEarliestActivityEventAndReturnError:(id *)a0;
- (id)entryForLatestActivityEventAndReturnError:(id *)a0;
- (char)enumerateActivityEventsInAscendingOrder:(char)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)enumerateActivityEventsThatOverlapWithDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateActivityEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateActivityEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsInAscendingOrder:(char)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)enumerateEntriesForActivityEventsThatOverlapWithDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)extremeActivityEventWithEntityIdentifierType:(Class)a0 ascending:(char)a1 outStartDate:(id *)a2 outEndDate:(id *)a3 error:(id *)a4;
- (id)initWithGDSwiftContext:(id)a0;
- (id)latestActivityEventAndReturnError:(id *)a0;
- (id)latestActivityEventWithEntityIdentifierType:(Class)a0 outStartDate:(id *)a1 outEndDate:(id *)a2 error:(id *)a3;

@end
