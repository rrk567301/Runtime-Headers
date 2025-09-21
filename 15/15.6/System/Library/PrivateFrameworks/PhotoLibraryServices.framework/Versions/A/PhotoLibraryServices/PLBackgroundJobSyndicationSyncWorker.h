@class CSSearchQuery, NSString, NSSet, NSDictionary, PLSyndicationSyncEngine, PLDatabaseContext;

@interface PLBackgroundJobSyndicationSyncWorker : PLBackgroundJobWorker <PLSyndicationSyncEngineDelegate> {
    PLSyndicationSyncEngine *_syncManager;
    NSSet *_supportedQueryTypes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _cancelled;
    NSDictionary *_currentWorkItem;
    CSSearchQuery *_currentQuery;
    PLDatabaseContext *_databaseContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;

- (void).cxx_destruct;
- (char)isInterruptible;
- (id)initWithLibraryBundle:(id)a0;
- (char)_hasPendingDeleteJobsInLibrary:(id)a0;
- (char)_hasPendingAttachmentJobsInLibrary:(id)a0;
- (char)_hasPendingChatJobsInLibrary:(id)a0;
- (char)_hasPendingJobsBasedOnLastSyncDate:(id)a0;
- (char)_needsSyndicationFullIndexSyncInLibrary:(id)a0;
- (char)_supportsSyndicationQueryType:(long long)a0;
- (id)_syndicationStartingDateInLibrary:(id)a0;
- (id)_workItemsBatchedFromDate:(id)a0 library:(id)a1 type:(long long)a2;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 batchHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 itemHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)photoLibraryWithDatabaseContext:(id)a0;
- (void)stopWorkingOnItem:(id)a0;
- (char)syncManager:(id)a0 shouldContinueWithLibrary:(id)a1;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (void)workerDidFinishWithDatabaseContext:(id)a0;

@end
