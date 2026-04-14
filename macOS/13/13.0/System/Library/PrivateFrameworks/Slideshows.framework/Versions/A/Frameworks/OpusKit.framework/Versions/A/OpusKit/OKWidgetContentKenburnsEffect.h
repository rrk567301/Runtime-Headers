@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {
    NSDictionary *_settings;
    double _animationStartTime;
    double _animationCurrentTime;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)stopAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithSettings:(id)a0;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (id)settingObjectForKey:(id)a0;
- (void)applySettings;
- (void)startAnimationWithView:(id)a0;
- (void)applyEndAnimation;
- (void)applyLayerValueOnAnimation;
- (void)applyAnimationModification;
- (double)animationCurrentTime;

@end
