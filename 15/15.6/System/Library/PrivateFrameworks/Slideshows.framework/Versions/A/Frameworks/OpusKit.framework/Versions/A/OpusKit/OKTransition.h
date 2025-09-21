@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning>

@property (nonatomic) double duration;
@property (nonatomic) char reversed;
@property (nonatomic) char isForward;
@property (readonly) struct CGPoint { double x; double y; } currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)a0;
- (void)animateTransitionWithContext:(id)a0;
- (void)startInteractiveTransitionWithContext:(id)a0;
- (void)updateInteractiveTransitionWithContext:(id)a0 andProgress:(double)a1;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(char)a3 duration:(double)a4 doEaseIn:(char)a5 isCompleting:(char)a6 wasCancelled:(char)a7 fromProgress:(double)a8 completionHandler:(id /* block */)a9;
- (struct CGPoint { double x0; double x1; })resolveLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setSettingDuration:(double)a0;
- (void)setSettingReversed:(char)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)settingObjectForKey:(id)a0;
- (double)transitionDurationWithContext:(id)a0;
- (void)transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 completionHandler:(id /* block */)a3;

@end
