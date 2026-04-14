@class NSMutableDictionary, PLPhotoLibraryPathManager, PLSearchDonationProgressVersionProvider;

@interface PLSearchDonationProgress : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    id /* block */ _contextProviderBlock;
    PLSearchDonationProgressVersionProvider *_versionProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_progressByTaskID;
    NSMutableDictionary *_queryByTaskID;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)_newSearchQueryForTaskID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_setupProgressForTaskID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_updateProgressForTaskID:(unsigned long long)a0;
- (id)donationProgressForMediaProcessingTaskID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)donationProgressForMediaProcessingTaskIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPathManager:(id)a0 contextProviderBlock:(id /* block */)a1;

@end
