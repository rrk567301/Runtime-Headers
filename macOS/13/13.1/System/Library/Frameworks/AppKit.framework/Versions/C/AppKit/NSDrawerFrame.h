@interface NSDrawerFrame : NSFrameView {
    long long trackingTag;
    unsigned long long drawerEdge;
    BOOL registeredForEdgeChanges;
    BOOL _unused;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minContentSizeForMinFrameSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
+ (double)minFrameWidthWithTitle:(id)a0 styleMask:(unsigned long long)a1;

- (void)dealloc;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setLayer:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 owner:(id)a2;
- (id)contentFill;
- (void)viewWillMoveToWindow:(id)a0;
- (unsigned long long)shadowOptions;
- (BOOL)shouldBeTreatedAsInkEvent:(id)a0;
- (void)drawerDidOpen:(id)a0;
- (void)drawerDidClose:(id)a0;
- (void)registerForEdgeChanges:(id)a0;
- (void)shapeWindow;
- (struct CGSize { double x0; double x1; })minFrameSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resizeIndicatorRect;
- (void)drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawFrameRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustHalftonePhase;
- (void)_addTrackingRects;
- (void)_removeTrackingRects;
- (void)setEdge:(unsigned long long)a0;
- (void)resizeWithEvent:(id)a0;
- (void)viewDidMoveToWindow:(id)a0;
- (void)_postFrameChangeNotification;

@end
