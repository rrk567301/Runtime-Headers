@class AKPageController, AKShapeDetectionController, NSString, AKInkOverlayView;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>

@property (weak) AKPageController *pageController;
@property (retain) AKInkOverlayView *inkOverlayView;
@property (retain) AKShapeDetectionController *shapeDetectionController;
@property char ignoreAnnotationAndSelectionKVO;
@property char onlyPencilDraws;
@property (copy) id /* block */ delayedShapeDetectionBlock;
@property double lastStrokeEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)a0;

- (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (void)_controllerWillSave:(id)a0;
- (id)_convertCHDrawing:(id)a0 fromDrawingInCanvasView:(id)a1 toInkOverlayView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDrawingInCanvasView:(id)a1 toPageControllerModelSpace:(id)a2;
- (void)_enclosingScrollViewDidScroll:(id)a0;
- (void)_fullSetup;
- (void)_inkCanvasAnnotationUpdated:(id)a0;
- (void)_inkDidChangeNotification:(id)a0;
- (void)_partialTeardown;
- (void)_performDelayedShapeDetection;
- (void)_setupGestureDependencies;
- (void)_tearDownGestureDependencies;
- (void)_toolStatusUpdated:(id)a0;
- (void)_updateAllowedTouchTypesAllEnabled:(char)a0 pencilEnabled:(char)a1;
- (void)_updateGestureDependencyPriority;
- (void)annotationEditingDidEndWithCompletion:(id /* block */)a0;
- (void)beginIgnoringAnnotationSelectionObservation:(id)a0;
- (void)endIgnoringAnnotationSelectionObservation:(id)a0;
- (id)initWithPageController:(id)a0;
- (void)inputView:(id)a0 didCollectDrawingForAnalysis:(id)a1;
- (void)inputViewDidBeginStroke:(id)a0;
- (char)isIgnoringAnnotationAndSelectionKVO:(id)a0;
- (char)isWaitingToCoalesceStrokes;
- (id)overlayView:(id)a0;
- (struct CGSize { double x0; double x1; })scaleFromDrawingInCanvasView:(id)a0 toPageControllerModelSpace:(id)a1;
- (char)shapeDetectionController:(id)a0 shouldSelectCandidateAnnotation:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)a0;
- (void)shapeDetectionControllerWillPickCandidate:(id)a0 isInk:(char)a1;

@end
