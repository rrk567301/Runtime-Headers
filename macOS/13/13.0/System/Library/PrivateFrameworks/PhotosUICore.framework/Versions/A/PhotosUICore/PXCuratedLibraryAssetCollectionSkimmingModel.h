@class PXCuratedLibraryViewModel, PXAssetCollectionReference, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
}

@property (readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference;
@property (readonly, nonatomic) BOOL isPlayingSlideshow;
@property (readonly, nonatomic) BOOL isInteractionInProgress;
@property (readonly, nonatomic) BOOL canStartSkimming;
@property (readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } initialIndexPath;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } skimmedIndexPath;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_updateViewModel;
- (id)validatedAssetCollectionReference:(id)a0;
- (void)prepareForSlideshowForAssetCollectionReference:(id)a0;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)a0;
- (void)prepareForSkimmingInAssetCollectionReference:(id)a0;
- (void)transitionToSlideshow;
- (void)transitionToSkimming;
- (void)_prepareIndexesForAssetCollectionReference:(id)a0 willStartSkimming:(BOOL)a1 willStartSlideshow:(BOOL)a2;
- (void)tearDownAfterSkimmingShowHints:(BOOL)a0 persistState:(BOOL)a1;
- (void)persistSkimmingState;

@end
