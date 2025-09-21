@interface IntelligencePlatform._GDSwiftLifeEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void /* unknown type, empty encoding */ swiftContext;
}

- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestActivityEventAndReturnError:(id *)a0;
- (id)earliestEntryForActivityEventAndReturnError:(id *)a0;
- (char)enumerateActivityEventsThatOverlapWith:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateActivityEventsWhoseEndDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateActivityEventsWhoseStartDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateActivityEventsWithAscending:(char)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)enumerateEntriesForActivityEventsThatOverlapWith:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsWhoseEndDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsWhoseStartDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForActivityEventsWithAscending:(char)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)latestActivityEventAndReturnError:(id *)a0;
- (id)latestEntryForActivityEventAndReturnError:(id *)a0;

@end
