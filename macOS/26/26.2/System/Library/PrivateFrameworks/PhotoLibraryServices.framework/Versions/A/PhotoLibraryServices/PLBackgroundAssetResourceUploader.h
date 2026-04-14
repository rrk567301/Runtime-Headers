@class OS_dispatch_queue;
@protocol PLPhotoLibraryFactory;

@interface PLBackgroundAssetResourceUploader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDelegate, PLAssetResourceUploader> {
    void /* unknown type, empty encoding */ lockedSessionsByBundleID;
    void /* unknown type, empty encoding */ lockedCompletionHandlers;
    void /* unknown type, empty encoding */ discretionaryTaskOverride;
}

@property (nonatomic, readonly) id<PLPhotoLibraryFactory> photoLibraryFactory;
@property (nonatomic, readonly) OS_dispatch_queue *queue;

+ (id)descriptionForTaskState:(long long)a0;
+ (id)longDescriptionForBackgroundTasks:(id)a0 directTasks:(id)a1;
+ (id)longDescriptionForTask:(id)a0;
+ (id)normalDescriptionForBackgroundTasks:(id)a0 directTasks:(id)a1;
+ (id)normalDescriptionForTask:(id)a0;
+ (id)shortDescriptionForBackgroundTasks:(id)a0 directTasks:(id)a1;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)init;
- (id)fetchPendingJobsForBundleID:(id)a0 in:(id)a1;
- (void)checkForExistingPreScheduledUploadForTasks:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkForExistingPreScheduledUploadTaskForBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkForExistingPreScheduledUploadTaskWithCompletionHandler:(id /* block */)a0;
- (id)fetchJobWithUUID:(id)a0 in:(id)a1;
- (BOOL)handleTaskCompletionWithResponse:(id)a0 jobUUID:(id)a1 error:(id)a2;
- (id)initWithPhotoLibraryFactory:(id)a0;
- (id)lockedSessionIdentifierForBundleID:(id)a0 isPreScheduled:(BOOL)a1;
- (id)makeLocallyAvailableWithResource:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 library:(id)a3 completionHandler:(id /* block */)a4;
- (void)networkStatusForBundleID:(id)a0 withLevel:(long long)a1 completionHandler:(id /* block */)a2;
- (void)queue_urlSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)updateJobWithUUID:(id)a0 withState:(short)a1 inLibrary:(id)a2;
- (void)uploadFileWithURL:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 request:(id)a3 isPreScheduled:(BOOL)a4 photoLibrary:(id)a5 completionHandler:(id /* block */)a6;
- (id)urlSessionForBundleID:(id)a0 isPreScheduled:(BOOL)a1;
- (void)verifyJobConsistencyWithCompletionHandler:(id /* block */)a0;
- (void)verifyJobsForBundleIDs:(id)a0 completion:(id /* block */)a1;
- (void)verifyJobsForSessions:(id)a0 bundleID:(id)a1 :(id /* block */)a2;

@end
