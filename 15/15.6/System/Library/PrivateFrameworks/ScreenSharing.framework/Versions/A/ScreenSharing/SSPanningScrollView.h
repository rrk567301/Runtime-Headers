@class NSImageView, NSTimer, NSTrackingArea, NSVisualEffectView, SSFrameBufferView, NSWindow;

@interface SSPanningScrollView : NSScrollView {
    NSTrackingArea *mTrackingArea;
    long long mPanningMode;
    NSTimer *mPanningTimer;
    char _leftPanActive;
    char _rightPanActive;
    char _topPanActive;
    char _bottomPanActive;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomRect;
}

@property (retain) NSVisualEffectView *fxView;
@property (retain) NSImageView *myImageView;
@property (retain) SSFrameBufferView *frameBufferView;
@property (retain) NSWindow *blankBackgroundWindow;
@property long long panningMode;
@property char disablePanningEvents;
@property char showDisconnectedBlurring;
@property struct CGPoint { double x; double y; } lastPoint;

+ (char)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)updateTrackingAreas;
- (void)panView;
- (void)setTopTracking:(char)a0;
- (char)scrollbarActive;
- (void)commonInitialization;
- (void)createBlankBackgroundWindow;
- (void)disposeBlankBackgroundWindow;
- (void)edgePanForMouseEvent:(id)a0;
- (void)occlusionStateChanged:(char)a0;
- (void)panForEvent:(id)a0;
- (char)pointInContentForWindowMouseCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAdjustedForMagnification:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreScrollPoint;
- (void)scrollForMouseEvent:(id)a0 animate:(char)a1;
- (void)scrollToCursor:(struct CGPoint { double x0; double x1; })a0 animate:(char)a1;
- (void)setBottomTracking:(char)a0;
- (void)setEffectFullScreen:(char)a0;
- (void)setLeftTracking:(char)a0;
- (void)setRightTracking:(char)a0;
- (void)setupTrackingArea;
- (void)startPanning;
- (void)stopPanning;
- (void)updatePanTrackingRects;

@end
