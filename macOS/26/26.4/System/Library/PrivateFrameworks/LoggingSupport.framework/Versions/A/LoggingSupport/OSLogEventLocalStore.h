@interface OSLogEventLocalStore : OSLogEventStore {
    int _livefd;
}

- (BOOL)_createLiveFD:(int *)a0 error:(id *)a1;
- (struct _os_timesync_db_s { } *)_createTSDB:(int)a0 error:(id *)a1;
- (void)_finalizeEventSource:(id)a0;
- (id)_createLCR:(id *)a0;
- (id)_createEventSource:(id)a0 metadata:(id)a1 timesync:(struct _os_timesync_db_s { } *)a2;

@end
