@class NSString, BRCServerZone, CKFetchRecordsOperation;

@interface BRCFetchRecordsWrapperOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    CKFetchRecordsOperation *_fetchRecordsOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (id)createActivity;
- (void).cxx_destruct;
- (id)initWithCKFetchRecordsOperation:(id)a0 opName:(id)a1 group:(id)a2 serverZone:(id)a3 isUserWaiting:(BOOL)a4 sessionContext:(id)a5;

@end
