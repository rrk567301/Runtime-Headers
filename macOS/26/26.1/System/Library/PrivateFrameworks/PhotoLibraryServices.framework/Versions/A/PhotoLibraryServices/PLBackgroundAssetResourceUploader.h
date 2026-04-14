@class OS_dispatch_queue;
@protocol PLPhotoLibraryFactory;

@interface PLBackgroundAssetResourceUploader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDelegate, PLAssetResourceUploader> {
    void /* unknown type, empty encoding */ lockedSessionsByBundleID;
    void /* unknown type, empty encoding */ discretionaryTaskOverride;
}

@property (nonatomic, readonly) id<PLPhotoLibraryFactory> photoLibraryFactory;
@property (nonatomic, readonly) OS_dispatch_queue *queue;

+ (id)descriptionForTaskState:(long long)a0;
+ (id)longDescriptionForTask:(id)a0;
+ (id)longDescriptionForTasks:(id)a0;
+ (id)normalDescriptionForTask:(id)a0;
+ (id)normalDescriptionForTasks:(id)a0;
+ (id)shortDescriptionForTasks:(id)a0;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)fetchPendingJobsForBundleID:(id)a0 in:(id)a1;
- (void)verifyJobsForSession:(id)a0 bundleID:(id)a1 :(id /* block */)a2;
- (id)fetchJobWithUUID:(id)a0 in:(id)a1;
- (BOOL)handleTaskCompletionWithResponse:(id)a0 jobUUID:(id)a1 error:(id)a2;
- (id)initWithPhotoLibraryFactory:(id)a0;
- (id)makeLocallyAvailableWithResource:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 library:(id)a3 completionHandler:(id /* block */)a4;
- (void)networkStatusForBundleID:(id)a0 withLevel:(long long)a1 completionHandler:(id /* block */)a2;
- (void)queue_urlSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)updateJobWithUUID:(id)a0 withState:(short)a1 inLibrary:(id)a2;
- (void)uploadFileWithURL:(id)a0 jobUUID:(id)a1 bundleID:(id)a2 request:(id)a3;
- (id)urlSessionForBundleID:(id)a0;
- (void)verifyJobConsistencyWithCompletionHandler:(id /* block */)a0;
- (void)verifyJobsForBundleIDs:(id)a0 completion:(id /* block */)a1;

@end
