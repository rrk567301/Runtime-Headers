@class NSView, NSBox, NSMutableArray;

@interface NSVisualTabPickerShadowTileView : NSView {
    NSView *_sidebarView;
    NSView *_titlebarView;
    NSMutableArray *_sidebarAndTitlebarAnimations;
}

@property (class, readonly) double headerHeight;

@property (readonly) NSView *containerView;
@property (readonly) NSBox *headerBackgroundView;
@property (readonly) NSView *borderView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)dealloc;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)_setUpBorderView;
- (void)_setUpContentViews;
- (id)_sidebarAnimationWithKeyPath:(id)a0 windowValue:(id)a1 thumbnailValue:(id)a2 forGridAnimation:(long long)a3;
- (BOOL)accessibilityIsIgnored;
- (void)animateCornerRadiusForGridAnimation:(long long)a0;
- (void)animateTitlebarImage:(id)a0 height:(double)a1 width:(double)a2 gridAnimation:(long long)a3;
- (void)cleanupAnimations;
- (void)enableEdgeAntialiasingMask:(BOOL)a0;
- (void)selectedTabDidChange;
- (void)setCloseButtonVisible:(BOOL)a0;
- (void)setExposeBorderVisible:(BOOL)a0;
- (void)startTitleOpacityAnimation:(long long)a0;
- (void)willStartExitAnimation;

@end
