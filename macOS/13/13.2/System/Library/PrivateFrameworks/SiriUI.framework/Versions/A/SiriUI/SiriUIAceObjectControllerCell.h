@class NSView, SiriUIAceObjectViewController, NSString;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell <CAAnimationDelegate> {
    NSView *_animationView;
}

@property (retain, nonatomic) SiriUIAceObjectViewController *aceViewController;
@property (nonatomic) long long insertionAnimationType;
@property (nonatomic) long long replacementAnimationType;
@property (retain, nonatomic) NSView *replacedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)isFlipped;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)beginAnimation;
- (void)configureSubviewsForAnimationType;
- (void)_parentViewInCell;
- (void)_parentPreviousViewInCell;
- (void)_animateInsertionFadeIn;
- (void)_animateReplacementCrossFade;
- (void)_animateInsertionFlyIn;
- (id)_flyInAnimationForAceViewController:(id)a0;

@end
