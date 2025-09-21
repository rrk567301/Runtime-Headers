@class _CPLPruneRequestCounter, NSString, CPLPlatformObject, NSURL, NSMutableDictionary, NSObject, CPLEngineFileStorage;
@protocol OS_dispatch_queue;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    _CPLPruneRequestCounter *_pruneRequests;
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;
    char _shouldCreateTempFolder;
}

@property (readonly, nonatomic) CPLEngineFileStorage *fileStorage;
@property (nonatomic) char shouldCheckFilesForUpload;
@property (readonly, nonatomic) NSURL *tempFolderURL;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (char)openWithError:(id *)a0;
- (unsigned long long)scopeType;
- (char)resetWithError:(id *)a0;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (id)statusDictionary;
- (id)retainFileURLForResource:(id)a0 error:(id *)a1;
- (char)_clearAndCreateTempFolderIfNecessaryWithError:(id *)a0;
- (char)checkIsEmpty;
- (char)compactWithError:(id *)a0;
- (id)createTempDestinationURLForResource:(id)a0 error:(id *)a1;
- (char)dropResourceForUpload:(id)a0 error:(id *)a1;
- (char)hasResource:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (void)notePruningRequestForResource:(id)a0 realPrune:(char)a1 successful:(char)a2;
- (void)notePruningRequestForResource:(id)a0 realPrune:(char)a1 successful:(char)a2 prunedSize:(unsigned long long)a3;
- (char)performMaintenanceWithError:(id *)a0;
- (char)releaseFileURL:(id)a0 forResource:(id)a1 error:(id *)a2;
- (char)storeDownloadedResource:(id)a0 atURL:(id)a1 error:(id *)a2;
- (char)storeResourceCopyForUpload:(id)a0 error:(id *)a1;
- (char)storeResourceForUpload:(id)a0 shouldCheckResource:(char)a1 error:(id *)a2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
