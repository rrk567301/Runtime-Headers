@class NSString, BRCServerZone;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initDeltaSyncWithServerZone:(id)a0;
- (void)_performAfterFetchingRecordChanges:(id /* block */)a0;
- (BOOL)handleZoneNotFoundIfSyncingDownForTheFirstTime:(id)a0;
- (void)_startSyncDown;
- (void)_saveInitialServerZoneData:(id)a0 clientChangeTokenData:(id)a1;
- (void)_fetchInitialZoneIfNecessaryWithCreatedZone:(id)a0;
- (void)_startCreateZoneAndSubscriptionAndSyncDown;

@end
