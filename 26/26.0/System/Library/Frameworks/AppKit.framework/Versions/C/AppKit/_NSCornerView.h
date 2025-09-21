@class NSBannerView;

@interface _NSCornerView : NSView {
    NSBannerView *_backgroundView;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)enclosingScrollView;
- (void)removeFromSuperview;
- (BOOL)isOpaque;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)_addOrRemoveBlurViewIfNecessary;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (BOOL)_drawingEndSeparator;
- (void)_finishedMakingConnections;
- (void)_invalidateHeaderDependentDrawing;
- (int)_vibrancyBlendMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRect;
- (void)viewWillMoveToSuperview:(id)a0;

@end
