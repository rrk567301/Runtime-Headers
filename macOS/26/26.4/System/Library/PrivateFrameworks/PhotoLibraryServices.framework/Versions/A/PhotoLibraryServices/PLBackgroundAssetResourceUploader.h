@class OS_dispatch_queue;
@protocol PLPhotoLibraryFactory;

@interface PLBackgroundAssetResourceUploader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDelegate, PLAssetResourceUploader> {
    void /* unknown type, empty encoding */ lockedSessionsByBundleID;
    void /* unknown type, empty encoding */ lockedCompletionHandlers;
    void /* unknown type, empty encoding */ currentPreScheduledTaskSupportsResumable;
    void /* unknown type, empty encoding */ serverResumableSupportCache;
    void /* unknown type, empty encoding */ discretionaryTaskOverride;
}

@property (nonatomic, readonly) id<PLPhotoLibraryFactory> photoLibraryFactory;
@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveInformationalResponse:(id)a2;
- (id)init;
- (void)cancelAndDiscardResumeDataWithBundleID:(id)a0 jobUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelWithCompletionHandler:(id /* block */)a0;
- (void)checkForExistingPreScheduledUploadTaskWithCompletionHandler:(id /* block */)a0;
- (BOOL)handleTaskCompletionWithResponse:(id)a0 jobUUID:(id)a1 error:(id)a2;
- (id)initWithPhotoLibraryFactory:(id)a0;
- (id)makeLocallyAvailableWithResource:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 library:(id)a3 completionHandler:(id /* block */)a4;
- (void)networkStatusForBundleID:(id)a0 withLevel:(long long)a1 completionHandler:(id /* block */)a2;
- (void)uploadFileWithURL:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 request:(id)a3 photoLibrary:(id)a4 completionHandler:(id /* block */)a5;
- (void)verifyJobConsistencyWithCompletionHandler:(id /* block */)a0;

@end
