@class AKController, NSView, AKGeometryHelper, AKPageModelController, NSString, NSMutableDictionary, AKInkPageOverlayController, AKLayerPresentationManager;
@protocol AKControllerDelegateProtocol;

@interface AKPageController : NSObject <AKNoteEditorControllerDelegate, AKNoteEditorControllerDelegate>

@property (weak) AKController *controller;
@property (retain) AKPageModelController *pageModelController;
@property (retain, nonatomic) AKGeometryHelper *geometryHelper;
@property BOOL superviewDependentThingsWereSetUp;
@property (retain, nonatomic) AKLayerPresentationManager *layerPresentationManager;
@property (retain, nonatomic) AKInkPageOverlayController *inkPageOverlayController;
@property (retain, nonatomic) id inkOverlayDrawingUndoTarget;
@property (retain, nonatomic) NSView *overlayView;
@property (retain) NSMutableDictionary *noteEditors;
@property unsigned long long pageIndex;
@property BOOL shouldPixelate;
@property (readonly) id<AKControllerDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageControllerWithController:(id)a0 andPageModelController:(id)a1;

- (void).cxx_destruct;
- (void)teardown;
- (id)initForTesting;
- (long long)currentModelToScreenExifOrientation;
- (double)modelBaseScaleFactor;
- (struct CGPoint { double x0; double x1; })convertPointFromModelToOverlay:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromOverlayToModel:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectOfOverlay;
- (void)openPopupAnnotation:(id)a0;
- (id)newContentSnapshotPDFDataAtScale:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLoupeAnnotation:(id)a2;
- (void)removeNoteFromAnnotation:(id)a0;
- (void)addPopupToAnnotation:(id)a0 openPopup:(BOOL)a1;
- (BOOL)relinquishablesAreLoaded;
- (void)unregisterFromUndoManager:(id)a0;
- (void)setupRelinquishables;
- (void)releaseRelinquishables;
- (double)currentModelToScreenScaleFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickyViewFrameForNoteEditor:(id)a0;
- (id)stickyContainerForNoteEditor:(id)a0;
- (unsigned long long)edgeForNoteEditor:(id)a0;
- (void)noteEditorDidBeginEditing:(id)a0;
- (void)noteEditorDidFinishEditing:(id)a0;
- (BOOL)handleEditAnnotation:(id)a0;
- (void)updateScaleFactor:(double)a0 isLiveUpdate:(BOOL)a1 forceUpdate:(BOOL)a2;
- (void)overlayWasAddedToSuperview;
- (id)annotationsBeneathLoupe:(id)a0;
- (id)_initWithController:(id)a0 andPageModelController:(id)a1;
- (id)_popoverPresentingViewController;
- (id)popoverPresentingViewControllerForNoteEditor:(id)a0;
- (void)updateOverlayViewLayers;

@end
