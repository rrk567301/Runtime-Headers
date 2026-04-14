@class PXZoomablePhotosInteraction, NSViewController, PXPhotosViewModel, _PXPhotosSearchBodyCollectionSectionLayout, NSString, PXZoomablePhotosViewModel, PXZoomablePhotosLayout;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXPhotosViewControllerPresentationDelegate, PXPhotosSelectionContainer, PXSearchFeedViewControllerPresentationDelegate, PXPersonViewControllerPresentationDelegate;

@interface PXPhotosSearchBodyLayoutProvider : NSObject <PXChangeObserver, PhotosUICore.PhotosSearchResultsCollectionsViewSelectionDelegate, PXZoomablePhotosInteractionViewModelProvider, PXPhotosCustomSectionBodyLayoutProvider, PXZoomablePhotosInteractionProvider> {
    BOOL _userChangedZoom;
    PXZoomablePhotosLayout *_allResultsLayout;
    BOOL _isUpdatingPhotosViewModel;
    long long _currentSpecSizeClass;
    long long _currentSpecOrientation;
}

@property (weak, nonatomic) id<PXPhotosSelectionContainer> collectionsSelection;
@property (retain, nonatomic) PXZoomablePhotosInteraction *zoomInteraction;
@property (retain, nonatomic) _PXPhotosSearchBodyCollectionSectionLayout *collectionSectionLayout;
@property (readonly, nonatomic) id collectionSectionProvider;
@property (weak, nonatomic) NSViewController<PXPersonViewControllerPresentationDelegate, PXPhotosViewControllerPresentationDelegate, PXSearchFeedViewControllerPresentationDelegate> *hostViewController;
@property (retain, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXZoomablePhotosViewModel *zoomableViewModel;
@property (copy, nonatomic) id /* block */ layoutInformationChangedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (long long)_numberOfColumnsWithSpec:(id)a0;
- (void)clearAssetSelections;
- (void)configureSectionBodyLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (id)createSectionBodyLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outWantsDecoration:(BOOL *)a4;
- (id)initWithCollectionSectionProvider:(id)a0;
- (id)provideViewModelForAssetReference:(id)a0;
- (id)provideZoomableInteraction;
- (void)sectionedLayout:(id)a0 bodyLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;
- (BOOL)shouldPreventFaultOutOfBodyLayout:(id)a0 inAssetSectionLayout:(id)a1;
- (id)viewModelForPinchLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
