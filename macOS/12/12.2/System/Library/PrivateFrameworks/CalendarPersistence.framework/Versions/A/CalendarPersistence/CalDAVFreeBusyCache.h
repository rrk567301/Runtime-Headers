@interface CalDAVFreeBusyCache : CalFreeBusyCache

- (void)dealloc;
- (void)cleanUp;
- (id)initWithPrincipalID:(id)a0;
- (void)_calDAVChangeQueuedAnyThread:(id)a0;
- (void)freeBusyServerRequestForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 withDelegate:(id)a3;

@end
