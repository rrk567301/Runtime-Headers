@class NSString, PXPhotosViewModel, PXZoomablePhotosLayout, PXZoomablePhotosViewModel;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate;

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider> {
    PXZoomablePhotosLayout *_zoomablePhotosLayout;
}

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) PXZoomablePhotosViewModel *zoomablePhotosViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_configureZoomableLayoutDecorations:(id)a0 fromAssetSectionLayout:(id)a1;
- (void)_updatePhotosViewModelWithChanges:(unsigned long long)a0;
- (void)_updateZoomableViewModelWithChanges:(unsigned long long)a0;
- (void)configureSectionBodyLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (id)createInteraction;
- (id)createSectionBodyLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outWantsDecoration:(char *)a4;
- (void)sectionedLayout:(id)a0 bodyLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(char)a4;
- (char)shouldPreventFaultOutOfBodyLayout:(id)a0 inAssetSectionLayout:(id)a1;

@end
