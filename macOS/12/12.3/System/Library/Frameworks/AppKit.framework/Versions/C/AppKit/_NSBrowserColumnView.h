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
- (void)resetCursorRects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void)mouseDown:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)setIsEmptyColumn:(BOOL)a0;
- (void)_setMarkedWidth:(double)a0;
- (BOOL)preservesContentDuringLiveResize;
- (void)_markWidth;
- (BOOL)_markedWidthDiffersFromCurrentWidth;
- (void)_clearMarkedWidth;
- (void)_endColumnAnimationOptimization;
- (id)_enclosingBrowserView;
- (void)_beginColumnAnimationOptimization;
- (void)setScrollerStyle:(long long)a0;
- (void)scrollWheel:(id)a0;
- (void)_updateHorizontalScrollerAvoidance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnResizeButtonRect;
- (id)menuForEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_columnDividerLineRect;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)_doRemoveFromSuperviewWithOutNeedingDisplay:(BOOL)a0;
- (BOOL)_accessoryViewMightInterfereWithOverlayScrollers:(id)a0;
- (id)_invalidateGStatesForTree;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsInsetForBorder;
- (BOOL)shouldAllowUserColumnResizing;
- (BOOL)_drawsColumnDividerLine;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint { double x0; double x1; })a0 forResizeDirection:(long long)a1;
- (void)_setDrawsColumnDividerLine:(BOOL)a0;
- (void)viewDidMoveToSuperview;

@end
