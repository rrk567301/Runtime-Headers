@class NSMutableSet, NSMutableDictionary;

@interface QCCompositionCellLayer : QCCompositionLayer {
    double _pausedTime;
    double _delayTime;
    char _paused;
    char _wasAsynchronous;
    id _controller;
    NSMutableSet *_updatedKeys;
    NSMutableDictionary *_cachedDefaultInputParameters;
    NSMutableDictionary *_updatedCompositionValues;
    float _expectedFrameRate;
}

+ (char)shouldRenderOnBackgroundThread;
+ (char)automaticRedisplay;
+ (id)defaultRenderingOptions;
+ (char)implicitParameterAnimations;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)setMaximumFrameRate:(float)a0;
- (void)wakeup;
- (char)renderAtTime:(double)a0 arguments:(id)a1;
- (void)resumeAnimation;
- (id)initWithComposition:(id)a0 controller:(id)a1;
- (char)_needsDisplay;
- (void)_setValue:(id)a0 forInputkey:(id)a1 forPort:(id)a2;
- (double)_timeForTime:(double)a0;
- (void)addKeyToBeUpdated:(id)a0;
- (void)addKeysToBeUpdated:(id)a0;
- (char)needsRender:(double)a0 arguments:(id)a1;
- (void)pauseAnimation;
- (void)setUpdatedCompositionValue:(id)a0 forKey:(id)a1;
- (void)sleep;
- (void)updatePatchWithDefaultValues;

@end
