@class NSView, BackgroundColorView, NSMutableArray;

@interface VisualTabPickerShadowTileView : NSView {
    BackgroundColorView *_headerBackgroundView;
    NSView *_sidebarView;
    NSView *_toolbarView;
    NSView *_borderView;
    NSMutableArray *_sidebarAndToolbarAnimations;
}

@property (readonly) NSView *containerView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)isAccessibilityElement;
- (void)_getTopBarAnimationDuration:(double *)a0 timeOffset:(double *)a1 gridAnimation:(long long)a2;
- (void)setCloseButtonVisible:(BOOL)a0;
- (void)animateSidebarImage:(id)a0 width:(double)a1 gridAnimation:(long long)a2;
- (id)_sidebarAnimationWithKeyPath:(id)a0 windowValue:(id)a1 thumbnailValue:(id)a2 forGridAnimation:(long long)a3;
- (void)animateToolbarImage:(id)a0 height:(double)a1 gridAnimation:(long long)a2;
- (void)_setUpContentViews;
- (void)_setUpBorderView;
- (void)cleanUpAnimations;

@end
