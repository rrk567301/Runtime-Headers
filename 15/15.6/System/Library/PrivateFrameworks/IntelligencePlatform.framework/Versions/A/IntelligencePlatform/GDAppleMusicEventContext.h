@class _TtC20IntelligencePlatform30_GDSwiftAppleMusicEventContext;

@interface GDAppleMusicEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform30_GDSwiftAppleMusicEventContext *gdSwiftContext;
}

- (id)context;
- (void).cxx_destruct;
- (id)initAndReturnError:(id *)a0;
- (char)enumerateEntriesForSongEventsInAscendingOrder:(char)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)earliestSongEventAndReturnError:(id *)a0;
- (id)entryForEarliestSongEventAndReturnError:(id *)a0;
- (id)entryForLatestSongEventAndReturnError:(id *)a0;
- (char)enumerateEntriesForSongEventsThatOverlapWithDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateEntriesForSongEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateEntriesForSongEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateSongEventsInAscendingOrder:(char)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (char)enumerateSongEventsThatOverlapWithDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateSongEventsWhoseEndDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (char)enumerateSongEventsWhoseStartDatesAreInDateInterval:(id)a0 ascending:(char)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)initWithGDSwiftContext:(id)a0;
- (id)latestSongEventAndReturnError:(id *)a0;

@end
