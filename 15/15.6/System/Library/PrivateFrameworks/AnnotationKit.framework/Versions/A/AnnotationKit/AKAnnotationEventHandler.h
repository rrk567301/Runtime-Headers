@class AKPageController, AKAnnotation;

@interface AKAnnotationEventHandler : NSObject

@property (weak) AKPageController *pageController;
@property (retain) AKAnnotation *annotation;
@property unsigned long long initiallyDraggedArea;
@property char touchModifiersEnabled;
@property struct CGPoint { double x; double y; } initialDraggedPoint;
@property struct CGPoint { double x; double y; } initialOtherPoint;
@property struct CGPoint { double x; double y; } initialCenter;
@property char draggingHorizontalOnly;
@property char draggingVerticalOnly;
@property struct CGPoint { double x; double y; } lastPositionInModel;
@property struct CGPoint { double x; double y; } lastPositionInWindow;

+ (Class)_handlerClassForPlatformForAnnotation:(id)a0;
+ (char)allowsDragging;
+ (char)allowsDraggingOfAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })annotationRectangleForDraggingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAnnotation:(id)a1 onPageController:(id)a2 withOriginalCenter:(struct CGPoint { double x0; double x1; })a3;
+ (id)newAnnotationEventHandlerForCurrentPlatformForAnnotation:(id)a0 withPageController:(id)a1;

- (void).cxx_destruct;
- (double)naturalAspectRatioForAnnotation;
- (void)getInitialDraggedPoint:(struct CGPoint { double x0; double x1; } *)a0 otherPoint:(struct CGPoint { double x0; double x1; } *)a1 center:(struct CGPoint { double x0; double x1; } *)a2 forEvent:(id)a3 orRecognizer:(id)a4;
- (id)_initWithAnnotation:(id)a0 andPageController:(id)a1;
- (char)alwaysLockAspectRatio;
- (char)canLockAspectRatio;
- (char)continueDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (char)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (char)lockAspectRatioByDefault;
- (struct CGPoint { double x0; double x1; })modelPointFromPointInWindow:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSizeForAnnotation;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })windowPointFromEvent:(id)a0 orRecognizer:(id)a1;

@end
