@class NSString, BRCServerZone, CKFetchRecordsOperation;

@interface BRCFetchRecordsWrapperOperation : _BRCOperation <BRCOperationSubclass> {
    BRCServerZone *_serverZone;
    CKFetchRecordsOperation *_FetchRecordsOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithCKFetchRecordsOperation:(id)a0 group:(id)a1 serverZone:(id)a2 isUserWaiting:(BOOL)a3;
- (id)createActivity;

@end
