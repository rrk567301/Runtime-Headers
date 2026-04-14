@class NSMutableSet, NSMutableDictionary;

@interface QCCompositionCellLayer : QCCompositionLayer {
    double _pausedTime;
    double _delayTime;
    BOOL _paused;
    BOOL _wasAsynchronous;
    id _controller;
    NSMutableSet *_updatedKeys;
    NSMutableDictionary *_cachedDefaultInputParameters;
    NSMutableDictionary *_updatedCompositionValues;
    float _expectedFrameRate;
}

+ (BOOL)shouldRenderOnBackgroundThread;
+ (id)defaultRenderingOptions;
+ (BOOL)automaticRedisplay;
+ (BOOL)implicitParameterAnimations;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)wakeup;
- (void)setMaximumFrameRate:(float)a0;
- (BOOL)renderAtTime:(double)a0 arguments:(id)a1;
- (BOOL)needsRender:(double)a0 arguments:(id)a1;
- (void)sleep;
- (BOOL)_needsDisplay;
- (void)addKeyToBeUpdated:(id)a0;
- (void)addKeysToBeUpdated:(id)a0;
- (id)initWithComposition:(id)a0 controller:(id)a1;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)_setValue:(id)a0 forInputkey:(id)a1 forPort:(id)a2;
- (void)updatePatchWithDefaultValues;
- (void)setUpdatedCompositionValue:(id)a0 forKey:(id)a1;
- (double)_timeForTime:(double)a0;

@end
