@class NSImageView, NSBrowser;

@interface _NSBrowserColumnView : NSScrollView {
    NSImageView *_imageViewForAnimationOptimization;
    NSBrowser *_tmpStashedBrowserView;
    double _markedWidth;
    struct __BrcvFlags { unsigned char isEmptyColumn : 1; unsigned char hasMarkedWidth : 1; unsigned char tileDisabled : 1; unsigned char drawsColumnDividerLine : 1; unsigned int reserved : 28; } _brcvFlags;
    double _vScrollerUnmodifiedHeight;
    id _scrollHandler;
}

+ (id)columnResizeButtonImage;

- (void)dealloc;
- (void)_endColumnAnimationOptimization;
- (char)_accessoryViewMightInterfereWithOverlayScrollers:(id)a0;
- (void)_beginColumnAnimationOptimization;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsInsetForBorder;
- (void)_clearMarkedWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_columnDividerLineRect;
- (void)_doRemoveFromSuperviewWithOutNeedingDisplay:(char)a0;
- (char)_drawsColumnDividerLine;
- (id)_enclosingBrowserView;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint { double x0; double x1; })a0 forResizeDirection:(long long)a1;
- (id)_invalidateGStatesForTree;
- (void)_markWidth;
- (char)_markedWidthDiffersFromCurrentWidth;
- (void)_setDrawsColumnDividerLine:(char)a0;
- (void)_setMarkedWidth:(double)a0;
- (void)_updateHorizontalScrollerAvoidance;
- (id)accessibilityChildrenAttribute;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnResizeButtonRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (char)preservesContentDuringLiveResize;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)resetCursorRects;
- (void)scrollWheel:(id)a0;
- (void)setIsEmptyColumn:(char)a0;
- (void)setScrollerStyle:(long long)a0;
- (char)shouldAllowUserColumnResizing;
- (void)tile;
- (void)viewDidMoveToSuperview;

@end
