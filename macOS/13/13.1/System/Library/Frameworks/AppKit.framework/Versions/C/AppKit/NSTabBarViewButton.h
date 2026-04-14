@class NSString, NSView, _NSViewActionForwardingLayerDelegate, CABackdropLayer, NSColor;

@interface NSTabBarViewButton : _NSKeyLoopSplicingContainerView {
    _NSViewActionForwardingLayerDelegate *_layerDelegate;
    NSColor *_backgroundColor;
    NSView *_backgroundView;
    NSView *_topBorderView;
    NSView *_leadingTopBorderView;
    NSView *_trailingTopBorderView;
    NSView *_leftBorderView;
    NSView *_rightBorderView;
    CABackdropLayer *_backdropLayer;
    BOOL _forcesActiveWindowState;
    BOOL _active;
    BOOL _hasMouseOverHighlight;
    BOOL _useModalCollapsedLayout;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL hasMouseOverHighlight;
@property (nonatomic) BOOL forcesActiveWindowState;
@property (nonatomic) BOOL useModalCollapsedLayout;
@property (copy, nonatomic) NSString *backdropGroupName;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)setActive:(BOOL)a0;
- (void)_windowChangedKeyState;
- (void)setHasMouseOverHighlight:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)useModalCollapsedLayout;
- (void)setUseModalCollapsedLayout:(BOOL)a0;
- (void)setForcesActiveWindowState:(BOOL)a0;
- (BOOL)forcesActiveWindowState;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (void)_setUpBackgroundViews;
- (id)_makeBackgroundView;
- (id)_makeSideBorderView;
- (id)_makeTopBorderView;
- (void)_updateViewColorsForActiveTab:(BOOL)a0 inActiveWindow:(BOOL)a1;
- (void)setHasMouseOverHighlight:(BOOL)a0;
- (BOOL)hasMouseOverHighlight;
- (BOOL)_isAnimatingBackgroundColor;

@end
