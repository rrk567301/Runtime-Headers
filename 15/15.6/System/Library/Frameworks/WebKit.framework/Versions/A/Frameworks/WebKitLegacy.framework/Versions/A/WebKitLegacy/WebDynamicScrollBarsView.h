@interface WebDynamicScrollBarsView : NSScrollView <WebCoreFrameScrollView> {
    struct WebDynamicScrollBarsViewPrivate { unsigned int x0; unsigned char x1; unsigned char x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; struct CGPoint { double x0; double x1; } x15; BOOL x16; struct CGPoint { double x0; double x1; } x17; BOOL x18; } *_private;
}

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;
+ (void)setCustomScrollerClass:(Class)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (char)accessibilityIsIgnored;
- (char)autoforwardsScrollWheelEvents;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reflectScrolledClipView:(id)a0;
- (void)scrollClipView:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollWheel:(id)a0;
- (void)setContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)tile;
- (void)setVerticalScrollingModeLocked:(char)a0;
- (void)updateScrollers;
- (void)adjustForScrollOriginChange;
- (char)allowsHorizontalScrolling;
- (char)allowsVerticalScrolling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewFrame;
- (char)horizontalScrollingAllowed;
- (unsigned char)horizontalScrollingMode;
- (char)horizontalScrollingModeLocked;
- (char)inProgrammaticScroll;
- (struct CGPoint { double x0; double x1; })scrollOrigin;
- (void)scrollingModes:(unsigned char *)a0 vertical:(unsigned char *)a1;
- (void)setAllowsHorizontalScrolling:(char)a0;
- (void)setAllowsScrollersToOverlapContent:(char)a0;
- (void)setAlwaysHideHorizontalScroller:(char)a0;
- (void)setAlwaysHideVerticalScroller:(char)a0;
- (void)setHorizontalScrollingMode:(unsigned char)a0 andLock:(char)a1;
- (void)setHorizontalScrollingModeLocked:(char)a0;
- (void)setScrollBarsSuppressed:(char)a0 repaintOnUnsuppress:(char)a1;
- (void)setScrollOrigin:(struct CGPoint { double x0; double x1; })a0 updatePositionAtAll:(char)a1 immediately:(char)a2;
- (void)setScrollingModes:(unsigned char)a0 vertical:(unsigned char)a1 andLock:(char)a2;
- (void)setScrollingModesLocked:(char)a0;
- (void)setSuppressLayout:(char)a0;
- (void)setVerticalScrollingMode:(unsigned char)a0;
- (void)setVerticalScrollingMode:(unsigned char)a0 andLock:(char)a1;
- (char)verticalScrollingAllowed;
- (unsigned char)verticalScrollingMode;
- (char)verticalScrollingModeLocked;

@end
