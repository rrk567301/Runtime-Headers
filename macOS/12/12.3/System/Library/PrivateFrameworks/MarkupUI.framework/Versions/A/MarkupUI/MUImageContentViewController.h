@class NSDictionary, MUImageView, NSString;

@interface MUImageContentViewController : MUContentViewController <AKControllerDelegateProtocol, MUContentViewControllerProtocol> {
    struct CGImage { } *_contentImage;
}

@property (retain) id sourceContent;
@property (retain) NSDictionary *imageProperties;
@property (retain) id frameChangedObserver;
@property (retain) MUImageView *preloadedView;
@property (readonly, nonatomic) BOOL supportsImageDescriptionEditing;
@property (readonly, copy, nonatomic) NSString *originalImageDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL contentViewControllerCropEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)viewDidLoad;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (long long)exifOrientation;
- (void)setup;
- (void)teardown;
- (id)initWithNibName:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (void)editDetectedForAnnotationController:(id)a0;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)loadContentWithCompletionBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderFrame;
- (struct CGSize { double x0; double x1; })idealContentSizeForScreenSize:(struct CGSize { double x0; double x1; })a0 windowDecorationSize:(struct CGSize { double x0; double x1; })a1;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePicker;
- (void)finalizeCrop;
- (id)initWithSourceContent:(id)a0 archivedDataModel:(id)a1 delegate:(id)a2;
- (void)_setupContentRectObservers;
- (void)_imageViewFrameDidChange:(id)a0;
- (id)undoManagerForAnnotationController:(id)a0;
- (void)_ensureContentImage;
- (void)_updateMinZoomFactor;
- (void)_installOverlayOfController:(id)a0 forPageAtIndex:(unsigned long long)a1;
- (void)_uninstallOverlayOfController:(id)a0 forPageAtIndex:(unsigned long long)a1;
- (long long)_exifOrientationFromImageProperties:(id)a0;
- (id)_cropFilterChainForSourceImage:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originalSize:(struct CGSize { double x0; double x1; })a2;
- (id)_applyFilters:(id)a0 to:(id)a1;
- (void)_updateOverlayForGeometryChange;
- (void)_translateAnnotationsByX:(double)a0 byY:(double)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromOverlayToModelWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromModelToOverlayWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRectWithPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onOverlayAtPageIndex:(unsigned long long)a3 forAnnotationController:(id)a4;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (void)setPreferredCursor:(id)a0 forAnnotationController:(id)a1;
- (void)positionSketchOverlay:(id)a0 forAnnotationController:(id)a1;
- (BOOL)controllerShouldDetectFormElements:(id)a0;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { double x0; double x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (void)rotateRight:(id)a0;
- (void)rotateLeft:(id)a0;
- (id)initWithPreloadedImageView:(id)a0 inSource:(id)a1 archivedDataModel:(id)a2 delegate:(id)a3;
- (BOOL)isScreenCaptureItemAtURL:(id)a0;

@end
