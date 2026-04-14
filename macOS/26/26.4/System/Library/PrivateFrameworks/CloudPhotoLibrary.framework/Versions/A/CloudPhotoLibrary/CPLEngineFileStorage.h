@class NSString, CPLPlatformObject, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    BOOL _trackAllStoresAndDeletesUntilEndOfTransaction;
    BOOL _shouldResetPlatformTrackAllStoresAndDeletes;
}

@property (nonatomic) BOOL keepOriginals;
@property (nonatomic) BOOL deleteImmediately;
@property (nonatomic) BOOL trackAllStoresAndDeletes;
@property (nonatomic) BOOL trackAllStoresAndDeletesUntilEndOfTransaction;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (id)initWithBaseURL:(id)a0;
- (BOOL)_fixupIdentity:(id)a0 fileURL:(id)a1 data:(id)a2 error:(id *)a3;
- (BOOL)_recoverFromCrashWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (BOOL)doWrite:(id /* block */)a0 error:(id *)a1;
- (BOOL)storeFileAtURL:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 moveIfPossible:(BOOL)a3 needsCommit:(BOOL *)a4 error:(id *)a5;
- (id)_markerURLForTrackAllStoresAndDeletes;
- (BOOL)commitFileWithIdentity:(id)a0 error:(id *)a1;
- (void)doRead:(id /* block */)a0;
- (void)writeTransactionDidSucceed;
- (BOOL)hasCrashMarker;
- (BOOL)discardUncommittedFileWithIdentity:(id)a0 error:(id *)a1;
- (BOOL)_compactStorageIncludeOriginals:(BOOL)a0 desiredFreeSpace:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)storeData:(id)a0 identifier:(id)a1 needsCommit:(BOOL *)a2 error:(id *)a3;
- (BOOL)discardUncommittedFileWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)storeUnretainedData:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 error:(id *)a3;
- (void)checkFileSizeForIdentity:(id)a0;
- (void)_addIdentityToUncommittedFiles:(id)a0;
- (void)_removeIdentityFromUncommittedFiles:(id)a0;
- (id)retainFileURLForIdentity:(id)a0 resourceType:(unsigned long long)a1 error:(id *)a2;
- (BOOL)storeUnretainedFileAtURL:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 error:(id *)a3;
- (BOOL)storeData:(id)a0 identity:(id)a1 isOriginal:(BOOL)a2 needsCommit:(BOOL *)a3 error:(id *)a4;
- (BOOL)releaseFileURL:(id)a0 error:(id *)a1;
- (BOOL)addDeleteFlagToFileAtURL:(id)a0 error:(id *)a1;
- (BOOL)hasFileWithIdentifier:(id)a0;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)a0 errorHandler:(id /* block */)a1;
- (unsigned long long)countOfUncommittedFiles;
- (BOOL)checkIsEmpty;
- (BOOL)deleteFileWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)openWithFileRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)storeUnretainedData:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)_identityForIdentifier:(id)a0;
- (BOOL)discardAllRetainedFileURLsWithError:(id *)a0;
- (id)retainFileURLForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)storeUnretainedFileAtURL:(id)a0 identifier:(id)a1 error:(id *)a2;
- (id)fileEnumerator;
- (BOOL)deleteFileWithIdentity:(id)a0 includingOriginal:(BOOL)a1 error:(id *)a2;
- (BOOL)hasFileWithIdentity:(id)a0;
- (BOOL)deleteFileWithIdentity:(id)a0 error:(id *)a1;
- (BOOL)resetWithError:(id *)a0;
- (BOOL)compactStorageIncludeOriginals:(BOOL)a0 error:(id *)a1;
- (BOOL)storeFileAtURL:(id)a0 identifier:(id)a1 moveIfPossible:(BOOL)a2 needsCommit:(BOOL *)a3 error:(id *)a4;
- (BOOL)openWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (void)writeTransactionDidFail;
- (BOOL)compactStorage:(id *)a0;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 includeOriginals:(BOOL)a2 error:(id *)a3;
- (BOOL)commitFileWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)closeWithError:(id *)a0;

@end
