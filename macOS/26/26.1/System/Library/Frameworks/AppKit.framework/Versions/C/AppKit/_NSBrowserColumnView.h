@class NSImageView, NSBrowser, NSView, CALayer;

@interface _NSBrowserColumnView : NSScrollView {
    NSImageView *_imageViewForAnimationOptimization;
    NSBrowser *_tmpStashedBrowserView;
    double _markedWidth;
    struct __BrcvFlags { unsigned char isEmptyColumn : 1; unsigned char hasMarkedWidth : 1; unsigned char tileDisabled : 1; unsigned char drawsColumnDividerLine : 1; unsigned int reserved : 28; } _brcvFlags;
    double _vScrollerUnmodifiedHeight;
    id _scrollHandler;
    NSView *_scrollTrackBottomContainerView;
    CALayer *_scrollTrackBottomLayer;
    CALayer *_scrollTrackBottomGrabberLeft;
    CALayer *_scrollTrackBottomGrabberRight;
}

+ (id)_createContinuousPillLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)columnResizeButtonImage;

- (void)layout;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)menuForEvent:(id)a0;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (void)_endColumnAnimationOptimization;
- (BOOL)_accessoryViewMightInterfereWithOverlayScrollers:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_automaticContentInsets;
- (void)_beginColumnAnimationOptimization;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsInsetForBorder;
- (void)_clearMarkedWidth;
- (void)_configureScrollers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentBackgroundViewFrame;
- (void)_doRemoveFromSuperviewWithOutNeedingDisplay:(BOOL)a0;
- (BOOL)_drawsColumnDividerLine;
- (id)_enclosingBrowserView;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint { double x0; double x1; })a0 forResizeDirection:(long long)a1;
- (void)_markWidth;
- (BOOL)_markedWidthDiffersFromCurrentWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollerAffordanceKnobRect;
- (void)_setDrawsColumnDividerLine:(BOOL)a0;
- (void)_setMarkedWidth:(double)a0;
- (void)_setupScrollerAffordanceIfNeeded;
- (void)_updateScrollerAffordanceVisibility;
- (id)accessibilityChildrenAttribute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnResizeButtonRect;
- (BOOL)preservesContentDuringLiveResize;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)resetCursorRects;
- (void)scrollWheel:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })scrollerInsets;
- (void)setIsEmptyColumn:(BOOL)a0;
- (void)setScrollerStyle:(long long)a0;
- (BOOL)shouldAllowUserColumnResizing;
- (BOOL)wantsUpdateLayer;

@end
