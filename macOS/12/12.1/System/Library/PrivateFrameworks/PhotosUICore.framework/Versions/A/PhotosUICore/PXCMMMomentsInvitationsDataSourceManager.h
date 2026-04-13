@class NSString, PXCMMMomentsInvitationsDataSourceState, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}

@property (retain, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)mockDataSourceManagerFromRecentLargeMoments;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createInitialDataSource;
- (id)assetCollections;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithAssetCollectionsFetchResult:(id)a0;
- (void)startLoadingIfNeeded;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (id)_createInvitationsDataSourceFromCurrentState;
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatches;

@end
