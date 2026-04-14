@class NSColor, UXViewController, NSVisualEffectView;

@interface UXView : NSView {
    BOOL _blurEnabled;
    long long _blurMaterial;
    NSColor *_backgroundColor;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _frozenSafeAreaInsets;
    NSVisualEffectView *_contentBackgroundVisualEffectsView;
}

@property (weak, nonatomic) UXViewController *viewControllerProxy;
@property (nonatomic) BOOL wantsSafeAreaInsetsFrozen;
@property (readonly, nonatomic) NSVisualEffectView *_visualEffectsView;
@property (nonatomic) BOOL accessibilityChildrenHidden;
@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (copy) NSColor *backgroundColor;
@property (nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch;
@property (getter=isOpaque) BOOL opaque;
@property (readonly, nonatomic) long long effectiveUserInterfaceLayoutDirection;
@property (nonatomic) BOOL userInteractionEnabled;
@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) BOOL needsContentBackgroundVisualEffect;

+ (Class)layerClass;
+ (id)defaultSpringAnimationForKey:(id)a0 mass:(double)a1 stiffness:(double)a2 damping:(double)a3 velocity:(double)a4;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithDuration:(double)a0 delay:(double)a1 options:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)performWithoutAnimation:(id /* block */)a0;
+ (void)_animateUsingDefaultTimingWithOptions:(unsigned long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithDuration:(double)a0 delay:(double)a1 usingSpringWithDamping:(double)a2 initialSpringVelocity:(double)a3 options:(unsigned long long)a4 animations:(id /* block */)a5 completion:(id /* block */)a6;
+ (long long)_contentModeForLayerContentsGravity:(id)a0;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)updateLayer;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)recursiveDescription;
- (void)layout;
- (void)setBlurEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (id)snapshotView;
- (id)initWithCoder:(id)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)makeBackingLayer;
- (void)updateConstraintsForSubtreeIfNeeded;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (BOOL)wantsUpdateLayer;
- (id)_autoresizingDescription;
- (id)_superDescription;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)_disableBlur;
- (void)_enableBlur;
- (id)_infoForWindow;
- (id)_infoWithChildren;
- (id)_infoWithParents;
- (id)_makeContentBackgroundVisualEffectsView;
- (void)_updateContentBackgroundVisualEffectsView;
- (BOOL)blurEnabled;
- (void)setBlurMaterial:(long long)a0;
- (id)snapshotForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshotViewFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
