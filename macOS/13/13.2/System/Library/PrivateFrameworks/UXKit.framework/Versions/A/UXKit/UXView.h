@class NSColor, UXViewController, NSVisualEffectView;

@interface UXView : NSView {
    BOOL _blurEnabled;
    long long _blurMaterial;
    NSColor *_backgroundColor;
    NSVisualEffectView *_contentBackgroundVisualEffectsView;
}

@property (weak, nonatomic) UXViewController *viewControllerProxy;
@property (readonly) NSVisualEffectView *_visualEffectsView;
@property (nonatomic) BOOL accessibilityChildrenHidden;
@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch;
@property (getter=isOpaque) BOOL opaque;
@property (readonly, nonatomic) long long effectiveUserInterfaceLayoutDirection;
@property (nonatomic) BOOL userInteractionEnabled;
@property (retain, nonatomic) NSColor *borderColor;
@property (nonatomic) BOOL needsContentBackgroundVisualEffect;

+ (void)animateWithDuration:(double)a0 delay:(double)a1 options:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;
+ (void)performWithoutAnimation:(id /* block */)a0;
+ (Class)layerClass;
+ (void)animateWithDuration:(double)a0 delay:(double)a1 usingSpringWithDamping:(double)a2 initialSpringVelocity:(double)a3 options:(unsigned long long)a4 animations:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)_animateUsingDefaultTimingWithOptions:(unsigned long long)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)defaultSpringAnimationForKey:(id)a0 mass:(double)a1 stiffness:(double)a2 damping:(double)a3 velocity:(double)a4;
+ (long long)_contentModeForLayerContentsGravity:(id)a0;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (id)accessibilityChildren;
- (id)makeBackingLayer;
- (void)addSubview:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewWillStartLiveResize;
- (void)viewDidEndLiveResize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)recursiveDescription;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)updateConstraintsForSubtreeIfNeeded;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;
- (id)snapshotView;
- (void)setBlurEnabled:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (id)_autoresizingDescription;
- (id)_superDescription;
- (BOOL)blurEnabled;
- (id)_makeContentBackgroundVisualEffectsView;
- (void)_updateContentBackgroundVisualEffectsView;
- (void)_applyTintColorIfNotUXView:(id)a0;
- (id)snapshotForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)snapshotViewFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBlurMaterial:(long long)a0;
- (void)_enableBlur;
- (void)_disableBlur;
- (id)_infoWithChildren;
- (id)_infoForWindow;
- (id)_infoWithParents;

@end
