@class NSString, CPLPlatformObject, NSURL, NSDate, NSMutableArray, CPLEngineFileStorage;

@interface CPLEngineRecordComputeStatePushQueue : CPLEngineStorage <CPLAbstractObject> {
    NSMutableArray *_filesToCommit;
    NSMutableArray *_filesToDelete;
    NSDate *_incomingDownloadFolderCreationDate;
    NSURL *_outgoingUploadFolderURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastComputeStateDownloadRequestDateLock;
    NSDate *_lastComputeStateDownloadRequestDate;
    unsigned long long _tempFolderIndex;
}

@property (readonly, nonatomic) CPLEngineFileStorage *fileStorage;
@property (readonly, nonatomic) NSURL *incomingDownloadFolderURL;
@property (copy) NSDate *throttlingDate;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (char)openWithError:(id *)a0;
- (unsigned long long)scopeType;
- (id)statusDictionary;
- (void)noteComputeStateDownloadRequest;
- (char)addComputeState:(id)a0 error:(id *)a1;
- (id)computeStatesToUploadWithScopeIdentifier:(id)a0 localState:(unsigned long long)a1 maximumCount:(unsigned long long)a2;
- (unsigned long long)countOfComputeStates;
- (char)createIncomingDownloadFolderIfNecessaryWithError:(id *)a0;
- (id)createNewTempDownloadFolderWithError:(id *)a0;
- (id)createTempUploadFolderWithError:(id *)a0;
- (char)deleteIncomingDownloadFolderWithError:(id *)a0;
- (char)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (char)deleteTempUploadFolderWithError:(id *)a0;
- (unsigned long long)fileSizeForComputeStatePayloadFileURL:(id)a0 error:(id *)a1;
- (char)hasChangesInScopeWithIdentifier:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (char)performMaintenanceWithError:(id *)a0;
- (char)releaseFileURL:(id)a0 forComputeState:(id)a1 error:(id *)a2;
- (char)removeComputeState:(id)a0 error:(id *)a1;
- (char)removeComputeStateWithLocalScopedIdentifier:(id)a0 version:(id)a1 adjustmentFingerprint:(id)a2 error:(id *)a3;
- (id)retainFileURLForComputeState:(id)a0 error:(id *)a1;
- (char)updateFileURLForComputeState:(id)a0 error:(id *)a1;
- (char)updateLocalStateForComputeState:(id)a0 newLocalState:(unsigned long long)a1 error:(id *)a2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
