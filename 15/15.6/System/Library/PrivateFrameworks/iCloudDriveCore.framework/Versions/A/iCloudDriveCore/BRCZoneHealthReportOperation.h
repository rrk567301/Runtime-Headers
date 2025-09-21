@class NSString, BRCZoneHealthSyncPersistedState;

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {
    char shouldPerformAnotherBatch;
    BRCZoneHealthSyncPersistedState *_state;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (char)shouldRetryForError:(id)a0;
- (void)_reportRecords:(id)a0 requestID:(unsigned long long)a1;
- (id)initWithSessionContext:(id)a0 state:(id)a1;
- (char)shouldPerformAnotherBatch;

@end
