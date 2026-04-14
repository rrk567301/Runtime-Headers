@interface WebDynamicScrollBarsView : NSScrollView <WebCoreFrameScrollView> {
    struct WebDynamicScrollBarsViewPrivate { unsigned int x0; unsigned char x1; unsigned char x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; struct CGPoint { double x0; double x1; } x15; BOOL x16; struct CGPoint { double x0; double x1; } x17; BOOL x18; } *_private;
}

+ (Class)_verticalScrollerClass;
+ (Class)_horizontalScrollerClass;
+ (void)setCustomScrollerClass:(Class)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (void)tile;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)scrollWheel:(id)a0;
- (void)reflectScrolledClipView:(id)a0;
- (void)scrollClipView:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)autoforwardsScrollWheelEvents;
- (void)setAllowsScrollersToOverlapContent:(BOOL)a0;
- (void)setAlwaysHideHorizontalScroller:(BOOL)a0;
- (void)setAlwaysHideVerticalScroller:(BOOL)a0;
- (void)setAllowsHorizontalScrolling:(BOOL)a0;
- (BOOL)horizontalScrollingAllowed;
- (BOOL)verticalScrollingAllowed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (void)setSuppressLayout:(BOOL)a0;
- (void)setScrollBarsSuppressed:(BOOL)a0 repaintOnUnsuppress:(BOOL)a1;
- (void)adjustForScrollOriginChange;
- (void)updateScrollers;
- (BOOL)allowsHorizontalScrolling;
- (BOOL)allowsVerticalScrolling;
- (void)scrollingModes:(unsigned char *)a0 vertical:(unsigned char *)a1;
- (unsigned char)horizontalScrollingMode;
- (unsigned char)verticalScrollingMode;
- (void)setHorizontalScrollingMode:(unsigned char)a0 andLock:(BOOL)a1;
- (void)setVerticalScrollingMode:(unsigned char)a0 andLock:(BOOL)a1;
- (void)setVerticalScrollingMode:(unsigned char)a0;
- (void)setScrollingModes:(unsigned char)a0 vertical:(unsigned char)a1 andLock:(BOOL)a2;
- (void)setHorizontalScrollingModeLocked:(BOOL)a0;
- (void)setVerticalScrollingModeLocked:(BOOL)a0;
- (void)setScrollingModesLocked:(BOOL)a0;
- (BOOL)horizontalScrollingModeLocked;
- (BOOL)verticalScrollingModeLocked;
- (void)setScrollOrigin:(struct CGPoint { double x0; double x1; })a0 updatePositionAtAll:(BOOL)a1 immediately:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })scrollOrigin;
- (BOOL)inProgrammaticScroll;

@end
