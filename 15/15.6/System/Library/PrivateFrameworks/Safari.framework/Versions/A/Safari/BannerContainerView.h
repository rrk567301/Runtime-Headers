@class NSString, NSMapTable, Animation, NSLayoutConstraint, NSStackView, Banner;
@protocol BannerContainerViewDelegate;

@interface BannerContainerView : NSView <NSAnimationDelegate> {
    NSLayoutConstraint *_topAnchorContentLayoutGuideConstraint;
    NSStackView *_bannerStackView;
    NSMapTable *_clipViewsToConstraints;
    Animation *_animation;
    char _animatingIntoPlace;
    Banner *_bannerBeingAnimated;
}

@property (weak, nonatomic) id<BannerContainerViewDelegate> delegate;
@property (readonly, nonatomic, getter=isAnimating) char animating;
@property (readonly, nonatomic) double projectedHeightOfBanners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)clipsToBounds;

- (void).cxx_destruct;
- (void)invalidate;
- (void)animationDidEnd:(id)a0;
- (void)animationDidStop:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void)updateConstraints;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateBackgroundColor:(id)a0;
- (void)_continueInstallationOfBanner:(id)a0 withAnimation:(char)a1;
- (void)_continueUninstallationOfBanner:(id)a0 withAnimation:(char)a1;
- (void)_moveBannerIntoPlace:(id)a0 bannerIsAppearing:(char)a1 withAnimation:(char)a2;
- (void)installBanner:(id)a0 withAnimation:(char)a1;
- (void)uninstallBanner:(id)a0 withAnimation:(char)a1;

@end
