@class PXUpdater, NSString, PHPhotoLibrary, PXFetchResultBasedMemoriesDataSourceManager;

@interface PXStoryMemoryFeedDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL hasAnyFavorites;
@property (readonly, nonatomic) BOOL wantsFavoritesOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)performChanges:(id /* block */)a0;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)setWantsFavoritesOnly:(BOOL)a0;
- (void)_updateHasAnyFavorites;
- (void)_invalidateHasAnyFavorites;
- (void)setHasAnyFavorites:(BOOL)a0;

@end
