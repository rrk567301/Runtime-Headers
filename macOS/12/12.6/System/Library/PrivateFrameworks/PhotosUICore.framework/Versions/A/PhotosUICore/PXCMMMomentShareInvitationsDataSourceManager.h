@class PXCMMMomentShareInvitationsDataSource, NSString, PXCMMMomentShareInvitationsDataSourceState, NSMutableOrderedSet, NSDate, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
}

@property (class, readonly, nonatomic) NSDate *mostRecentCreationDate;

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceManager;
+ (id)_dataSourceManagerWithPredicate:(id)a0;
+ (id)emptyDataSourceManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)_initWithFetchResult:(id)a0;
- (void)_startLoadingIfNeeded;
- (id)momentShares;
- (void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)a0;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2 changedObjects:(id)a3;

@end
