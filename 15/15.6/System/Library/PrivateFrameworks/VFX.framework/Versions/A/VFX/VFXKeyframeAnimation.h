@interface VFXKeyframeAnimation : CAKeyframeAnimation {
    struct __CFXKeyframedAnimation { } *_cfxAnimation;
    char _caReady;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)keyPath;
- (double)duration;
- (void)setDuration:(double)a0;
- (id)values;
- (void)setRepeatCount:(float)a0;
- (char)autoreverses;
- (id)fillMode;
- (char)isRemovedOnCompletion;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAdditive:(char)a0;
- (void)setAutoreverses:(char)a0;
- (void)setFillMode:(id)a0;
- (void)setKeyPath:(id)a0;
- (void)setKeyTimes:(id)a0;
- (void)setRemovedOnCompletion:(char)a0;
- (void)setSpeed:(float)a0;
- (void)setTimeOffset:(double)a0;
- (void)setTimingFunction:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (void)setValues:(id)a0;
- (float)speed;
- (id)timingFunction;
- (id)timingFunctions;
- (char)additive;
- (id)biasValues;
- (id)continuityValues;
- (char)cumulative;
- (char)isAdditive;
- (char)isCumulative;
- (id)keyTimes;
- (void)setBiasValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(char)a0;
- (void)setRepeatDuration:(double)a0;
- (void)setTensionValues:(id)a0;
- (id)tensionValues;
- (double)timeOffset;
- (float)fadeOutDuration;
- (float)fadeInDuration;
- (void)setFadeInDuration:(float)a0;
- (void)setFadeOutDuration:(float)a0;
- (id)animationEvents;
- (void)_convertToCA;
- (char)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setCommitsOnCompletion:(char)a0;
- (void)_clearCFXCache;
- (struct __CFXKeyframedAnimation { } *)cfxAnimation;
- (void)setCfxAnimation:(struct __CFXKeyframedAnimation { } *)a0;

@end
