@class NSString, ViewActionForwardingLayerDelegate, NSView, CABackdropLayer;

@interface TabBarViewButton : KeyLoopSplicingContainerView {
    ViewActionForwardingLayerDelegate *_layerDelegate;
    NSView *_backgroundView;
    NSView *_topBorderView;
    NSView *_leadingTopBorderView;
    NSView *_trailingTopBorderView;
    NSView *_leftBorderView;
    NSView *_rightBorderView;
    CABackdropLayer *_backdropLayer;
}

@property (nonatomic, getter=isActive) char active;
@property (nonatomic) char usesOffscreenRendering;
@property (nonatomic) char forcesActiveWindowState;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) unsigned long long tabButtonState;

- (void).cxx_destruct;
- (id)_makeTopBorderView;
- (void)_setUpBackgroundViews;
- (void)_windowChangedKeyState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (char)wantsUpdateLayer;
- (id)_makeBackgroundComponentView;
- (void)_setUpTabBarViewButtonConstraints;
- (void)_updateBackgroundColorWithOldTabButtonState:(unsigned long long)a0 animated:(char)a1;
- (void)_updateBackgroundLayerImagesForActiveTab:(char)a0 inActiveWindow:(char)a1;
- (void)setTabButtonState:(unsigned long long)a0 animated:(char)a1;

@end
