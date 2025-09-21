@class NSString, PXTilingController, PXAssetsDataSourceManager, PXAssetsDataSource, PXSectionedSelectionManager, PXScrollViewSpeedometer, PXAssetsTilingLayout, NSMutableArray, PXReusableObjectPool, PXAssetBadgeManager, PXMediaProvider;
@protocol PXAssetsSceneDelegate;

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {
    char _isPerformingChanges;
    char _isPerformingUpdates;
    char _hasScheduledUpdate;
    struct { char layout; } _needsUpdateFlags;
    struct { char respondsToTileIdentifierConverterForChange; char respondsToWillTransitionToDataSource; char respondsToDidTransitionToDataSource; char respondsToTransitionAnimationCoordinatorForChange; } _delegateFlags;
    char _isAskingForTileIdentifierConverter;
    char _isAskingForTransitionAnimationCoordinator;
}

@property (retain, nonatomic, setter=_setDataSource:) PXAssetsDataSource *_dataSource;
@property (readonly, nonatomic) NSMutableArray *_anchors;
@property (nonatomic) unsigned long long autoplayBehavior;
@property (nonatomic) char autoplayTilesWaitForInput;
@property (weak, nonatomic) id<PXAssetsSceneDelegate> delegate;
@property (readonly, nonatomic) PXTilingController *tilingController;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetBadgeManager *badgeManager;
@property (readonly, nonatomic) PXScrollViewSpeedometer *scrollSpeedometer;
@property (readonly, nonatomic) PXReusableObjectPool *viewTileReusePool;
@property (readonly, nonatomic) PXAssetsTilingLayout *targetLayout;
@property (readonly, nonatomic) PXAssetsTilingLayout *currentLayout;
@property (nonatomic) char animatesContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (char)needsUpdate;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (void)_configureLayout:(id)a0;
- (void)_saveAnchorAsset;
- (void)_updateDataSourceIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)checkInTile:(void *)a0 withIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a1;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0 layout:(id)a1;
- (void)didTransitionToDataSource:(id)a0;
- (id)initWithTilingController:(id)a0 mediaProvider:(id)a1 dataSourceManager:(id)a2 delegate:(id)a3;
- (id)initWithTilingController:(id)a0 mediaProvider:(id)a1 dataSourceManager:(id)a2 selectionManager:(id)a3 delegate:(id)a4;
- (char)providesTileForIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 initialVisibleOriginForLayout:(id)a1;
- (struct CGPoint { double x0; double x1; })tilingController:(id)a0 targetVisibleOriginForLayout:(id)a1 proposedVisibleOrigin:(struct CGPoint { double x0; double x1; })a2;
- (id)tilingController:(id)a0 tileIdentifierConverterForChange:(id)a1;
- (id)tilingController:(id)a0 transitionAnimationCoordinatorForChange:(id)a1;
- (void)transitionToLayout:(id)a0;
- (void)willTransitionToDataSource:(id)a0;

@end
