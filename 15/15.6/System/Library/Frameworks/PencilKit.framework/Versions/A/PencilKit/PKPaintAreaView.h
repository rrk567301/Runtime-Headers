@class PKAlternativeStrokesAnimation, PKTool, NSString, PKPaintAreaViewSurface, NSMutableArray, PKShapeDrawingController;
@protocol PKPaintAreaViewDelegate, MTLDevice;

@interface PKPaintAreaView : NSView <PKShapeDrawingControllerDelegate> {
    PKPaintAreaViewSurface *_currentPaintSurfaceObject;
    NSMutableArray *_liveSurfaces;
    id<MTLDevice> _device;
}

@property (retain, nonatomic) PKShapeDrawingController *shapeDrawingController;
@property (retain, nonatomic) PKAlternativeStrokesAnimation *alternativeStrokesAnimation;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } strokeTransform;
@property (nonatomic) double liveAnimationStartTime;
@property (weak, nonatomic) id<PKPaintAreaViewDelegate> delegate;
@property (nonatomic) char switchSurfacesDuringStrokes;
@property (nonatomic) char fingerDrawingEnabled;
@property (nonatomic) char drawingDisabled;
@property (retain, nonatomic) PKTool *tool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (void)_drawingBegan:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })a0 locationInView:(struct CGPoint { double x0; double x1; })a1 inputType:(long long)a2;
- (id)_drawingController;
- (void)_endAlternativeStrokeIfNecessaryAccepted:(char)a0;
- (char)_isLiveAnimating;
- (id)_rendererController;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })applyTransformToTouchLocation:(struct CGPoint { double x0; double x1; })a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 newSurface:(id *)a2;
- (char)beginDrawingAtPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })a0 surface:(id)a1 locationInView:(struct CGPoint { double x0; double x1; })a2 inputType:(long long)a3;
- (char)canAddStroke;
- (void)checkAnimationsDidEndAtTime:(double)a0;
- (void)drawingEnded;
- (void)drawingMovedToPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })a0 locationInView:(struct CGPoint { double x0; double x1; })a1;
- (id)hitSurface:(struct CGPoint { double x0; double x1; })a0;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0 isFastGesture:(char)a1;
- (void)switchToNewPaintSurface:(id)a0;
- (void)vsync:(double)a0;

@end
