@interface _NSBrowserScrollView : NSScrollView

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)_doScroller:(id)a0 hitPart:(long long)a1 multiplier:(double)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_automaticContentInsets;
- (id)_enclosingBrowserView;
- (id)_focusRingBleedRegion;
- (void)_handleBoundsChangeForSubview:(id)a0;
- (void)_overlayScroller:(id)a0 didBecomeShown:(BOOL)a1;
- (BOOL)hasScrolledContentsUnderTitlebar;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollWheel:(id)a0;
- (void)setScrollerStyle:(long long)a0;

@end
