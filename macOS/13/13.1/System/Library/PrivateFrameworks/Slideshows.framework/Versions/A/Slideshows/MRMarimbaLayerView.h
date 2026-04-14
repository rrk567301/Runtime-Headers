@class NSSet, MRTouchSet, MRMarimbaLayer, NSValue;

@interface MRMarimbaLayerView : NSView {
    MRTouchSet *_touchSet;
    NSValue *_singleTapPositionAsValue;
    NSSet *_pendingBeginTouches;
}

@property (readonly) MRMarimbaLayer *marimbaLayer;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)marimbaWasSingleTapped:(id)a0;
- (void)cancelMarimbaWasSingleTapped;

@end
