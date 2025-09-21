@class PXMemoriesFeedDataSource, PHFetchResult, NSString, PXDiscoveryFeedDataSourceManager, PHPhotoLibrary, NSDate;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXMemoryForYouDataSourceManager> {
    char _memoryGenerationHasStarted;
}

@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) char _generatingAdditionalEntries;
@property (retain, nonatomic) PXDiscoveryFeedDataSourceManager *discoveryDataSourceManager;
@property (retain, nonatomic) PHFetchResult *memoriesFetchResult;
@property (nonatomic) unsigned long long firstUngroupedMemoryIndex;
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (readonly, nonatomic) char hasAnyMemories;

+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)a0 changeDetails:(id)a1 changeInstance:(id)a2;
+ (id)baseFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)generateEntriesFromMemories:(id)a0 startingFromIndex:(unsigned long long)a1 maximumNumberOfEntries:(unsigned long long)a2 finalMemoryIndex:(out unsigned long long *)a3;
+ (char)shouldGroupTogetherMemoriesWithCreationDate:(id)a0 andCreationDate:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)fetchOptions;
- (void)startObservingChanges;
- (id)createInitialDataSource;
- (void)reloadMemories:(char)a0;
- (void)_clearPendingNotificationForMemory:(id)a0;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)a0;
- (void)handleIncrementalFetchResultChange:(id)a0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)a1;
- (void)handleNonIncrementalFetchResultChange:(id)a0;
- (void)loadMoreContentWithCompletionHandler:(id /* block */)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)resetMemoriesFetchResult;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (void)startGeneratingMemories;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end
