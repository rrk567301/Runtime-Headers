@class NSDictionary;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect {
    NSDictionary *_settings;
    double _animationStartTime;
    double _animationCurrentTime;
}

+ (id)supportedSettings;

- (void)pauseAnimation;
- (id)settingObjectForKey:(id)a0;
- (void)stopAnimation;
- (void)resumeAnimation;
- (id)initWithSettings:(id)a0;
- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (double)animationCurrentTime;
- (void)applyAnimationModification;
- (void)applyEndAnimation;
- (void)applyLayerValueOnAnimation;
- (void)applySettings;
- (void)startAnimationWithView:(id)a0;

@end
