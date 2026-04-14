@interface CalExchangeFreeBusyCache : CalFreeBusyCache

- (void)dealloc;
- (id)initWithPrincipalID:(id)a0;
- (void)freeBusyServerRequestForCUAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 withDelegate:(id)a3;
- (void)availabilityOperationFinished:(id)a0;

@end
