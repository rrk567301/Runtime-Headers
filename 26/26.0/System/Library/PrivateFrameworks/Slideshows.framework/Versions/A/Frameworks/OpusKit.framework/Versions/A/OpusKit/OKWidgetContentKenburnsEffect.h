@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {
    NSDictionary *_settings;
    double _animationStartTime;
    double _animationCurrentTime;
}

+ (id)supportedSettings;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)pauseAnimation;
- (id)initWithSettings:(id)a0;
- (void)resumeAnimation;
- (id)init;
- (void)stopAnimation;
- (id)settingObjectForKey:(id)a0;
- (double)animationCurrentTime;
- (void)applyAnimationModification;
- (void)applyEndAnimation;
- (void)applyLayerValueOnAnimation;
- (void)applySettings;
- (void)startAnimationWithView:(id)a0;

@end
