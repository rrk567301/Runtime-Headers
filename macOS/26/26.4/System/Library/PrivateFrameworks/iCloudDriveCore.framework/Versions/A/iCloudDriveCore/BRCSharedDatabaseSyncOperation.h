@class NSString, BRCSharedServerChangeState;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {
    BRCSharedServerChangeState *_changeState;
}

@property (copy, nonatomic) id /* block */ shareDBSyncCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queue;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)createActivity;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)a0 block:(id /* block */)a1;
- (void)_performAfterRegisteringForPushes:(id /* block */)a0;
- (void)_performFetchChangedZones;
- (id)initWithSyncContext:(id)a0 sessionContext:(id)a1 changeState:(id)a2;

@end
