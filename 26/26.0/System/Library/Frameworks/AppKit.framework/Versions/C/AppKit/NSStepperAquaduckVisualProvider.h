@class NSView;

@interface NSStepperAquaduckVisualProvider : NSObject <NSStepperVisualProvider> {
    void /* unknown type, empty encoding */ stepper;
    void /* unknown type, empty encoding */ hostingView;
}

@property (nonatomic) struct { long long x0; unsigned long long x1; double x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } currentDrawingState;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;
@property (nonatomic, readonly) int blendModeForContextDrawing;
@property (nonatomic, readonly) NSView *designatedFocusRingView;

- (void)layout;
- (id)init;
- (void).cxx_destruct;
- (void)attachToStepper:(id)a0;
- (void)detachFromStepper:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCell:(id)a1 maskOnly:(BOOL)a2;
- (long long)hitTestForPoint:(struct CGPoint { double x0; double x1; })a0 inTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;

@end
