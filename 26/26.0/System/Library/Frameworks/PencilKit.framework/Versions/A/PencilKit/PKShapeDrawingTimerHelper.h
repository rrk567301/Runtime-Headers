@class NSString, PKShapeDrawingController, NSTimer;
@protocol PKShapeDrawingTimerHelperDelegate;

@interface PKShapeDrawingTimerHelper : NSObject <PKShapeDrawingControllerDelegate> {
    id<PKShapeDrawingTimerHelperDelegate> _delegate;
    PKShapeDrawingController *_shapeDrawingController;
    NSTimer *_timer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addStrokePoint:(struct CGPoint { double x0; double x1; })a0 inputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; double x11; BOOL x12; double x13; long long x14; long long x15; })a1;
- (void)beginStrokeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)shapeDrawingControllerRendererController:(id)a0;
- (void)shapeDrawingControllerShapeDetectionCancelled:(id)a0;
- (void)shapeDrawingControllerShapeGestureDetected:(id)a0 isFastGesture:(BOOL)a1;

@end
