@class NSBannerView;

@interface _NSCornerView : NSView {
    NSBannerView *_backgroundView;
}

- (id)initWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)_finishedMakingConnections;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (int)_vibrancyBlendMode;
- (void)viewWillMoveToSuperview:(id)a0;
- (BOOL)_drawingEndSeparator;
- (void)_invalidateHeaderDependentDrawing;
- (void)_addOrRemoveBlurViewIfNecessary;
- (id)enclosingScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRect;

@end
