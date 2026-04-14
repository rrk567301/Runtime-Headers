@interface VFXKeyframeAnimation : CAKeyframeAnimation {
    struct __CFXKeyframedAnimation { } *_cfxAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setKeyPath:(id)a0;
- (void)setTimingFunction:(id)a0;
- (double)repeatDuration;
- (id)timingFunction;
- (id)values;
- (id)keyPath;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDuration:(double)a0;
- (BOOL)autoreverses;
- (void)setRepeatCount:(float)a0;
- (void)setRepeatDuration:(double)a0;
- (void)setTimeOffset:(double)a0;
- (void)setAutoreverses:(BOOL)a0;
- (void)setFillMode:(id)a0;
- (float)speed;
- (id)description;
- (float)repeatCount;
- (BOOL)additive;
- (BOOL)isAdditive;
- (id)fillMode;
- (double)timeOffset;
- (void)setValues:(id)a0;
- (void)setSpeed:(float)a0;
- (double)duration;
- (void)setAdditive:(BOOL)a0;
- (BOOL)isRemovedOnCompletion;
- (void)setKeyTimes:(id)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (void)setTimingFunctions:(id)a0;
- (id)timingFunctions;
- (id)biasValues;
- (id)continuityValues;
- (BOOL)cumulative;
- (BOOL)isCumulative;
- (id)keyTimes;
- (void)setBiasValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(BOOL)a0;
- (void)setTensionValues:(id)a0;
- (id)tensionValues;
- (id)animationEvents;
- (void)_convertToCA;
- (void)setAnimationEvents:(id)a0;
- (void)_clearCFXCache;
- (struct __CFXKeyframedAnimation { } *)cfxAnimation;
- (void)setCfxAnimation:(struct __CFXKeyframedAnimation { } *)a0;

@end
