@class PXCuratedLibraryViewModel, PXAssetCollectionReference, PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingModel : NSObject {
    long long _zoomLevel;
    long long _skimmingZoomLevel;
    id _dataSourcePauseToken;
}

@property (readonly, nonatomic) PXAssetCollectionReference *containingAssetCollectionReference;
@property (readonly, nonatomic) char isPlayingSlideshow;
@property (readonly, nonatomic) char isInteractionInProgress;
@property (readonly, nonatomic) char canStartSkimming;
@property (readonly, copy, nonatomic) PXIndexPathSet *indexPathSetForSkimming;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } initialIndexPath;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } skimmedIndexPath;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)_prepareIndexesForAssetCollectionReference:(id)a0 willStartSkimming:(char)a1 willStartSlideshow:(char)a2;
- (void)_updateViewModel;
- (void)persistSkimmingState;
- (void)prepareForShowingHintsForAssetCollectionReference:(id)a0;
- (void)prepareForSkimmingInAssetCollectionReference:(id)a0;
- (void)prepareForSlideshowForAssetCollectionReference:(id)a0;
- (void)tearDownAfterSkimmingShowHints:(char)a0 persistState:(char)a1;
- (void)transitionToSkimming;
- (void)transitionToSlideshow;
- (id)validatedAssetCollectionReference:(id)a0;

@end
