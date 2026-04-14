@class NSArray, WKWebView, NSTrackingArea, ResponsiveDesignResizeHandleView, NSLayoutConstraint;
@protocol ResponsiveDesignContainerViewDelegate;

@interface ResponsiveDesignContainerView : NSView {
    ResponsiveDesignResizeHandleView *_leftHandle;
    ResponsiveDesignResizeHandleView *_rightHandle;
    ResponsiveDesignResizeHandleView *_bottomHandle;
    NSTrackingArea *_leftTrackingArea;
    NSTrackingArea *_bottomLeftTrackingArea;
    NSTrackingArea *_rightTrackingArea;
    NSTrackingArea *_bottomRightTrackingArea;
    NSTrackingArea *_bottomTrackingArea;
    NSTrackingArea *_currentTrackingArea;
    NSLayoutConstraint *_containerWidthConstraint;
    NSLayoutConstraint *_containerHeightConstraint;
    struct CGSize { double width; double height; } _lastBrowserSize;
    BOOL _stopNotifyingDelegateOfSizeChanges;
    BOOL _resizing;
    NSArray *_handleMarginConstraints;
}

@property (readonly, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<ResponsiveDesignContainerViewDelegate> delegate;
@property (nonatomic) struct CGSize { double x0; double x1; } browserSize;
@property (nonatomic) unsigned long long pixelRatio;

- (void)mouseDown:(id)a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)requiresConstraintBasedLayout;
- (void)updateTrackingAreas;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)resetCursorRects;
- (BOOL)wantsUpdateLayer;
- (void)_initalize;
- (unsigned long long)_snappingBehaviorForModifierKeys:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeWithMagnification:(double)a0;

@end
