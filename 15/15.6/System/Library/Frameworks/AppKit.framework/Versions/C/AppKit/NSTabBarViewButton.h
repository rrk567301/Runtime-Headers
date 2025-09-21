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
    char _forcesActiveWindowState;
    char _active;
    char _hasMouseOverHighlight;
    char _useModalCollapsedLayout;
}

@property (nonatomic, getter=isActive) char active;
@property (nonatomic) char hasMouseOverHighlight;
@property (nonatomic) char forcesActiveWindowState;
@property (nonatomic) char useModalCollapsedLayout;
@property (copy, nonatomic) NSString *backdropGroupName;

- (void).cxx_destruct;
- (void)layout;
- (char)_isAnimatingBackgroundColor;
- (id)_makeBackgroundView;
- (id)_makeSideBorderView;
- (id)_makeTopBorderView;
- (void)_setBackgroundColor:(id)a0 withAnimation:(id)a1;
- (void)_setUpBackgroundViews;
- (void)_updateViewColorsForActiveTab:(char)a0 inActiveWindow:(char)a1;
- (void)_windowChangedKeyState;
- (char)forcesActiveWindowState;
- (char)hasMouseOverHighlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)setActive:(char)a0;
- (void)setForcesActiveWindowState:(char)a0;
- (void)setHasMouseOverHighlight:(char)a0;
- (void)setHasMouseOverHighlight:(char)a0 animated:(char)a1;
- (void)setUseModalCollapsedLayout:(char)a0;
- (void)updateLayer;
- (char)useModalCollapsedLayout;
- (char)wantsUpdateLayer;

@end
