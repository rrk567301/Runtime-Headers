@class NSString, NSMapTable, Animation, Banner, NSStackView;
@protocol BannerContainerViewDelegate;

@interface BannerContainerView : NSView <NSAnimationDelegate> {
    NSStackView *_bannerStackView;
    NSMapTable *_clipViewsToConstraints;
    Animation *_animation;
    BOOL _animatingIntoPlace;
    Banner *_bannerBeingAnimated;
}

@property (weak, nonatomic) id<BannerContainerViewDelegate> delegate;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) double projectedHeightOfBanners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)clipsToBounds;

- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animationDidStop:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)a0;
- (void)_continueInstallationOfBanner:(id)a0 withAnimation:(BOOL)a1;
- (void)_continueUninstallationOfBanner:(id)a0 withAnimation:(BOOL)a1;
- (void)_moveBannerIntoPlace:(id)a0 bannerIsAppearing:(BOOL)a1 withAnimation:(BOOL)a2;
- (void)installBanner:(id)a0 withAnimation:(BOOL)a1;
- (void)uninstallBanner:(id)a0 withAnimation:(BOOL)a1;

@end
