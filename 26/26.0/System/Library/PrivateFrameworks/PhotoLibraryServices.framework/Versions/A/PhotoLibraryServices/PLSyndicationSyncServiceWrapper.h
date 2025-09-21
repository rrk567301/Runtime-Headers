@class CSSearchQuery, NSString, NSSet, PLPhotoLibrary, PLSyndicationSyncEngine, PLSyndicationSyncWorkItem;

@interface PLSyndicationSyncServiceWrapper : NSObject <PLSyndicationSyncEngineDelegate> {
    NSString *_name;
    unsigned char _ingestClientIdentifier;
    PLPhotoLibrary *_photoLibrary;
    NSSet *_supportedQueryTypes;
    PLSyndicationSyncEngine *_syncEngine;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _cancelled;
    PLSyndicationSyncWorkItem *_currentWorkItem;
    CSSearchQuery *_currentQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)workItemsNeedingProcessing;
- (void).cxx_destruct;
- (id)_workItemsBatchedFromDate:(id)a0 type:(long long)a1;
- (BOOL)_hasPendingAttachmentJobs;
- (BOOL)_hasPendingChatJobs;
- (BOOL)_hasPendingDeleteJobs;
- (BOOL)_hasPendingJobsBasedOnLastSyncDate:(id)a0;
- (BOOL)_needsSyndicationFullIndexSync;
- (BOOL)_supportsSyndicationQueryType:(long long)a0;
- (id)_syndicationStartingDate;
- (void)cancelWorkOnCurrentItem;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 batchHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)executeQueryForSyncManager:(id)a0 type:(long long)a1 startDate:(id)a2 endDate:(id)a3 itemHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)initWithPhotoLibrary:(id)a0 ingestClient:(unsigned char)a1;
- (void)performWorkOnItem:(id)a0 completion:(id /* block */)a1;
- (BOOL)syncManager:(id)a0 shouldContinueWithLibrary:(id)a1;
- (BOOL)syncSyndicationItemWithUniqueIdentifier:(id)a0 bundleID:(id)a1 queryType:(long long)a2 error:(id *)a3;

@end
