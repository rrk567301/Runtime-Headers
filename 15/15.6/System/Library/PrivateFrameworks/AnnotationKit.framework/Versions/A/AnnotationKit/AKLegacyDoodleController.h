@class AKController, NSString, AKShapeDetectionController, AKSmoothPathView, AKAnnotation, NSMutableArray;

@interface AKLegacyDoodleController : NSObject <AKSmoothPathViewDelegate, AKShapeDetectionControllerDelegate>

@property (weak) AKController *controller;
@property (retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView;
@property (copy, nonatomic) id /* block */ performRecognitionBlock;
@property (retain, nonatomic) AKShapeDetectionController *shapeDetectionController;
@property (retain) AKAnnotation *coalescedAnnotation;
@property (retain) NSMutableArray *recentDoodlesAnnotations;
@property (retain) NSMutableArray *recentDoodlePaths;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } recentDrawingBoundsInInputView;
@property char ignoreAnnotationAndSelectionKVO;
@property char isShowingOverlay;
@property char isWaitingToCoalesceStrokes;
@property (nonatomic) char preferDoodle;
@property (nonatomic) char coalescesDoodles;
@property (nonatomic, getter=shapeDetectionEnabled) char shapeDetectionEnabled;
@property (nonatomic) char selectNewlyCreatedAnnotations;
@property char pressureSensitiveDoodleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)_addAnnotationImmediatelyFor:(struct CGPath { } *)a0 withDrawingCenter:(struct CGPoint { double x0; double x1; })a1 drawingBoundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 pathIsPrestroked:(char)a3 isSingelDot:(char)a4 fromInputView:(id)a5;
- (void)_beginOrExtendCoalescingTimer;
- (void)_clearCoalescingState;
- (void)_coalesceDrawingsCancelled;
- (void)_coalesceRecentDrawings;
- (void)_executeDeferredRecognition;
- (void)_inputView:(id)a0 didCollectPath:(struct CGPath { } *)a1 isPrestroked:(char)a2;
- (void)_removeAnnotations:(id)a0 mostLikelyFromPageController:(id)a1;
- (void)_scheduleDelayedRecognitionForDrawing:(id)a0 withPath:(struct CGPath { } *)a1 boundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 center:(struct CGPoint { double x0; double x1; })a3 isPrestroked:(char)a4;
- (void)beginIgnoringAnnotationSelectionObservation:(id)a0;
- (id)createDoodleAnnotationWithPath:(struct CGPath { } *)a0 drawingBoundsInView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawingCenter:(struct CGPoint { double x0; double x1; })a2 pathIsPrestroked:(char)a3 shouldGoToPageController:(id *)a4;
- (void)dismissCandidatePicker;
- (void)endIgnoringAnnotationSelectionObservation:(id)a0;
- (void)handleDragAction:(id)a0;
- (void)handleForwardedEvent:(id)a0;
- (void)handleTapAction:(id)a0;
- (void)inputView:(id)a0 didCollectPath:(struct CGPath { } *)a1;
- (void)inputView:(id)a0 didCollectPrestrokedPath:(struct CGPath { } *)a1;
- (void)inputViewWillStartDrawing:(id)a0;
- (char)isIgnoringAnnotationAndSelectionKVO:(id)a0;
- (char)isShowingCandidatePicker;
- (id)overlayView:(id)a0;
- (void)removeOverlay;
- (char)shapeDetectionController:(id)a0 shouldSelectCandidateAnnotation:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)a0;
- (void)shapeDetectionControllerWillPickCandidate:(id)a0 isInk:(char)a1;
- (void)showOverlay;
- (void)updateStrokeAttributes;

@end
