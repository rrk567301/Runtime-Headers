@class NSString, BRCContainerMetadataSyncPersistedState;

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BRCContainerMetadataSyncPersistedState *_metadataSyncState;
}

@property (readonly, nonatomic) BOOL shouldPerformAnotherBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (id)createActivity;
- (void).cxx_destruct;
- (id)_containerMetadataRecordsToSaveWithBatchSize:(unsigned long long)a0 requestID:(unsigned long long)a1;
- (id)initWithSessionContext:(id)a0 metadataSyncPersistedState:(id)a1;
- (void)performAfterSavingRecords:(id /* block */)a0;

@end
