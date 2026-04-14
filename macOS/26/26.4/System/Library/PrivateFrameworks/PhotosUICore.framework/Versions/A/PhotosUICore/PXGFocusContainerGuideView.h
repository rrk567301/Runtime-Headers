@class PXGFocusContainerGuideViewConfiguration;

@interface PXGFocusContainerGuideView : UXView <PXGReusableView>

@property (copy, nonatomic) PXGFocusContainerGuideViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isEligibleForFocusInteraction;
- (void)becomeReusable;

@end
