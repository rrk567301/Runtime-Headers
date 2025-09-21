@class NSString, CPLPlatformObject, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    char _trackAllStoresAndDeletesUntilEndOfTransaction;
    char _shouldResetPlatformTrackAllStoresAndDeletes;
}

@property (nonatomic) char keepOriginals;
@property (nonatomic) char deleteImmediately;
@property (nonatomic) char trackAllStoresAndDeletes;
@property (nonatomic) char trackAllStoresAndDeletesUntilEndOfTransaction;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (char)resetWithError:(id *)a0;
- (char)closeWithError:(id *)a0;
- (char)addDeleteFlagToFileAtURL:(id)a0 error:(id *)a1;
- (char)deleteFileWithIdentifier:(id)a0 error:(id *)a1;
- (void)_addIdentityToUncommittedFiles:(id)a0;
- (char)commitFileWithIdentifier:(id)a0 error:(id *)a1;
- (char)compactStorage:(id *)a0;
- (void)doRead:(id /* block */)a0;
- (char)_compactStorageIncludeOriginals:(char)a0 desiredFreeSpace:(unsigned long long *)a1 error:(id *)a2;
- (char)_fixupIdentity:(id)a0 fileURL:(id)a1 data:(id)a2 error:(id *)a3;
- (id)_identityForIdentifier:(id)a0;
- (id)_markerURLForTrackAllStoresAndDeletes;
- (char)_recoverFromCrashWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (void)_removeIdentityFromUncommittedFiles:(id)a0;
- (void)checkFileSizeForIdentity:(id)a0;
- (char)checkIsEmpty;
- (char)commitFileWithIdentity:(id)a0 error:(id *)a1;
- (char)compactStorageIncludeOriginals:(char)a0 error:(id *)a1;
- (unsigned long long)countOfUncommittedFiles;
- (char)deleteFileWithIdentity:(id)a0 error:(id *)a1;
- (char)deleteFileWithIdentity:(id)a0 includingOriginal:(char)a1 error:(id *)a2;
- (char)discardAllRetainedFileURLsWithError:(id *)a0;
- (char)discardUncommittedFileWithIdentifier:(id)a0 error:(id *)a1;
- (char)discardUncommittedFileWithIdentity:(id)a0 error:(id *)a1;
- (char)doWrite:(id /* block */)a0 error:(id *)a1;
- (id)fileEnumerator;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)a0 errorHandler:(id /* block */)a1;
- (char)hasCrashMarker;
- (char)hasFileWithIdentifier:(id)a0;
- (char)hasFileWithIdentity:(id)a0;
- (char)openWithFileRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (char)openWithRecoveryHandler:(id /* block */)a0 error:(id *)a1;
- (char)releaseFileURL:(id)a0 error:(id *)a1;
- (id)retainFileURLForIdentifier:(id)a0 error:(id *)a1;
- (id)retainFileURLForIdentity:(id)a0 resourceType:(unsigned long long)a1 error:(id *)a2;
- (char)storeData:(id)a0 identifier:(id)a1 needsCommit:(char *)a2 error:(id *)a3;
- (char)storeData:(id)a0 identity:(id)a1 isOriginal:(char)a2 needsCommit:(char *)a3 error:(id *)a4;
- (char)storeFileAtURL:(id)a0 identifier:(id)a1 moveIfPossible:(char)a2 needsCommit:(char *)a3 error:(id *)a4;
- (char)storeFileAtURL:(id)a0 identity:(id)a1 isOriginal:(char)a2 moveIfPossible:(char)a3 needsCommit:(char *)a4 error:(id *)a5;
- (char)storeUnretainedData:(id)a0 identifier:(id)a1 error:(id *)a2;
- (char)storeUnretainedData:(id)a0 identity:(id)a1 isOriginal:(char)a2 error:(id *)a3;
- (char)storeUnretainedFileAtURL:(id)a0 identifier:(id)a1 error:(id *)a2;
- (char)storeUnretainedFileAtURL:(id)a0 identity:(id)a1 isOriginal:(char)a2 error:(id *)a3;
- (char)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 error:(id *)a2;
- (char)tryToFreeDiskSpace:(unsigned long long)a0 actuallyFreedSpace:(unsigned long long *)a1 includeOriginals:(char)a2 error:(id *)a3;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
