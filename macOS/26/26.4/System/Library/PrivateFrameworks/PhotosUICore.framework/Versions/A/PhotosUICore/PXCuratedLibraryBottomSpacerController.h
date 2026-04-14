@class PXGView, PXUpdater, PXCuratedLibraryLayout, NSString, PXCuratedLibraryViewModel, PXExtendedTraitCollection;

@interface PXCuratedLibraryBottomSpacerController : PXObservable <PXScrollViewControllerObserver, PXChangeObserver>

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) double visibleSpacerFraction;
@property (nonatomic) BOOL wantsSpacer;
@property (nonatomic) BOOL hasSpacer;
@property (nonatomic) BOOL hasAppearedOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidAppear;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateSpacer;
- (void)_invalidateWantsSpacer;
- (void)_performChangeForWantsSpacerInvalidation;
- (BOOL)_shouldShowSpacerForGridViewState;
- (void)_updateSpacer;
- (void)_updateWantsSpacer;
- (id)initWithViewModel:(id)a0 extendedTraitCollection:(id)a1 layout:(id)a2 gridView:(id)a3;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;

@end
