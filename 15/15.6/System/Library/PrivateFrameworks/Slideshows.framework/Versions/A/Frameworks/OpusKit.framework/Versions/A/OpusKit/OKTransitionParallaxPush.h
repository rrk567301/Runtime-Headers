@interface OKTransitionParallaxPush : OKTransition

@property (nonatomic) unsigned long long direction;
@property (nonatomic) double parallaxAmount;
@property (nonatomic) double fadeFromAlpha;
@property (nonatomic) double fadeToAlpha;

+ (id)supportedSettings;

- (id)init;
- (id)initWithSettings:(id)a0;
- (void)startInteractiveTransitionWithContext:(id)a0;
- (void)updateInteractiveTransitionWithContext:(id)a0 andProgress:(double)a1;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(char)a3 duration:(double)a4 doEaseIn:(char)a5 isCompleting:(char)a6 wasCancelled:(char)a7 fromProgress:(double)a8 completionHandler:(id /* block */)a9;
- (void)setSettingDirection:(unsigned long long)a0;
- (void)setSettingFadeFromAlpha:(double)a0;
- (void)setSettingFadeToAlpha:(double)a0;
- (void)setSettingParallaxAmount:(double)a0;

@end
