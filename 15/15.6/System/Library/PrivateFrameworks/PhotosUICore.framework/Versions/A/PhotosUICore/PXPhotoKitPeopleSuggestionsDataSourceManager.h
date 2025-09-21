@class NSString, PXUpdater, PXPhotoKitPeopleSuggestionsDataSource, PXPhotoKitPeopleSuggestionsDataSourceState, NSMutableOrderedSet, NSObject, PHAssetCollection;
@protocol OS_dispatch_queue;

@interface PXPhotoKitPeopleSuggestionsDataSourceManager : PXPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    char _isPrefetching;
    char _hasCreatedInitialDataSource;
    char _needsDeferredLoading;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedWorkerQueue;

@property (readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (retain, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state;
@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PXUpdater *updater;
@property (nonatomic) char hasStartedLoadingFinalDataSource;
@property (nonatomic) char hasFinishedLoadingFinalDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)a0;
+ (id)personsForClient:(unsigned long long)a0 fetchOptions:(id)a1;
+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)a0;
+ (id)sharedLibraryPeopleSuggestionsDataSourceManager;

- (void).cxx_destruct;
- (id)people;
- (void)startLoading;
- (char)isLoading;
- (void)cancelLoading;
- (id)createInitialDataSource;
- (id)mediaProvider;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (void)_handleFinishedFetchingBatch:(id)a0 preparedChangeDetails:(id)a1 forFetchResult:(id)a2;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)a0;
- (id)_initWithAssetCollection:(id)a0;
- (void)_loadFinalDataSource;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (void)boostLoading;
- (id)initWithPeopleFetchResult:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)startPrefetchingIfNeeded;

@end
