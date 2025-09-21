@class AKController, AKPageController, AKAlignmentGuideController, NSEvent, AKAnnotation, AKAnnotationEventHandler, NSString;

@interface AKMainEventHandler : NSResponder <AKFormFeatureDetectorDelegate>

@property char shouldEatNextLeftMouseUp;
@property char shouldEatNextRightMouseUp;
@property char dragDidCopySelectedAnnotations;
@property char undoManagerWasGroupingByEvent;
@property struct CGPoint { double x; double y; } leftMouseDownPoint;
@property (retain) AKPageController *dragPageController;
@property (retain) AKAlignmentGuideController *dragAlignmentGuideController;
@property struct CGPoint { double x; double y; } lastDragPoint;
@property struct CGPoint { double x; double y; } lastDragActualLocation;
@property struct CGPoint { double x; double y; } lastDragActualLocationInWindow;
@property double draggedAnnotationsMaxLeftEdge;
@property double draggedAnnotationsMinRightEdge;
@property double draggedAnnotationsMaxBottomEdge;
@property double draggedAnnotationsMinTopEdge;
@property (retain) NSEvent *lastEventWithValidLocationForAutoscroll;
@property (retain) NSEvent *lastLeftMouseDownEvent;
@property char wasSelectedByLongPressRecognizer;
@property (weak) AKAnnotation *annotationToBeginEditingOnDragEnd;
@property (weak) AKController *controller;
@property unsigned long long currentModifierFlags;
@property char mainEventHandlerIsInTrackingLoop;
@property char mainEventHandlerIsInDoodleTrackingLoop;
@property char mainEventHandlerIsInRotationLoop;
@property struct CGPoint { double x; double y; } firstDragPoint;
@property struct CGPoint { double x; double y; } panGestureStartPointInWindow;
@property (retain) AKAnnotationEventHandler *annotationEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newMainEventHandlerForCurrentPlatformWithController:(id)a0;

- (void).cxx_destruct;
- (void)teardown;
- (id)initWithController:(id)a0;
- (char)handleKeyboardEvent:(id)a0;
- (char)handleRotateEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })_alignedAnnotationDragPointForPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 orRecognizer:(id)a2;
- (void)_beginEditingIfTextAnnotation:(id)a0 withEvent:(id)a1 orRecognizer:(id)a2;
- (char)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x0; double x1; })a0;
- (char)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint { double x0; double x1; })a0 withStartingPoint:(struct CGPoint { double x0; double x1; })a1;
- (char)_didNotHandleEventSoDeselect;
- (struct CGPoint { double x0; double x1; })_modelPointFromPointInWindow:(struct CGPoint { double x0; double x1; })a0 usingPageController:(id)a1;
- (void)_setCurrentPageBasedOnPageController:(id)a0;
- (void)_updateSelectionWithAnnotation:(id)a0 onPageController:(id)a1;
- (id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint { double x0; double x1; })a0 onPageController:(id)a1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)a0 orRecognizer:(id)a1;
- (void)applyTranslationToAllSelectedAnnotations:(struct CGPoint { double x0; double x1; })a0;
- (char)continueDragEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)continueRotateEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)enterDragEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)enterRotateEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (void)finishTranslationOfAllSelectedAnnotations;
- (char)handleDoubleDownEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleRightDownEvent:(id)a0;
- (char)hitTestAnnotationsIncludingPOI:(char)a0 ignoreIfDeselected:(char)a1 atPointInWindow:(struct CGPoint { double x0; double x1; })a2 outAnnotation:(id *)a3;
- (char)hitTestPointsOfInterestsAtPoint:(struct CGPoint { double x0; double x1; })a0 onPageController:(id)a1 inAnnotations:(id)a2 event:(id)a3 recognizer:(id)a4 cursorUpdateOnly:(char)a5;
- (char)mainHandleEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGPoint { double x0; double x1; })modelPointFromEvent:(id)a0 orRecognizer:(id)a1 onPageController:(id *)a2;
- (struct CGPoint { double x0; double x1; })modelPointFromWindowPoint:(struct CGPoint { double x0; double x1; })a0 foundOnPageController:(id *)a1;
- (id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 inAnnotations:(id)a1 onPageController:(id)a2 wasOnBorder:(char *)a3 wasOnText:(char *)a4;
- (void)updateCursorForEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })windowPointFromEvent:(id)a0 orRecognizer:(id)a1;

@end
