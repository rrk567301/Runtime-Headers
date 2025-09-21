@class NSProgressIndicator, PXStoryBufferingStatusViewConfiguration;

@interface PXStoryBufferingStatusView : UXView <PXGReusableView>

@property (readonly, nonatomic) NSProgressIndicator *spinnerView;
@property (copy, nonatomic) PXStoryBufferingStatusViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_updateAnimation;
- (void)becomeReusable;

@end
