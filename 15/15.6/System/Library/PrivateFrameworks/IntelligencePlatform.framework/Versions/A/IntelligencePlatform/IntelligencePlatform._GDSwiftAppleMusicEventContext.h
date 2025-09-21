@interface IntelligencePlatform._GDSwiftAppleMusicEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void /* unknown type, empty encoding */ swiftContext;
}

- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (id)earliestEntryForSongEventAndReturnError:(id *)a0;
- (id)earliestSongEventAndReturnError:(id *)a0;
- (char)enumerateEntriesForSongEventsThatOverlapWith:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForSongEventsWhoseEndDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForSongEventsWhoseStartDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateEntriesForSongEventsWithAscending:(char)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)enumerateSongEventsThatOverlapWith:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateSongEventsWhoseEndDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateSongEventsWhoseStartDatesAreIn:(id)a0 ascending:(char)a1 error:(id *)a2 block:(id /* block */)a3;
- (char)enumerateSongEventsWithAscending:(char)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)latestEntryForSongEventAndReturnError:(id *)a0;
- (id)latestSongEventAndReturnError:(id *)a0;

@end
