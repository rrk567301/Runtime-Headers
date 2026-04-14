@interface VFXKeyframeAnimation : CAKeyframeAnimation {
    struct __CFXKeyframedAnimation { } *_cfxAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (id)timingFunction;
- (float)repeatCount;
- (BOOL)isAdditive;
- (void)setSpeed:(float)a0;
- (float)speed;
- (void)setValues:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)values;
- (void)setKeyPath:(id)a0;
- (void)setDuration:(double)a0;
- (void)setRepeatDuration:(double)a0;
- (void)setFillMode:(id)a0;
- (id)fillMode;
- (double)duration;
- (void)setTimingFunction:(id)a0;
- (BOOL)additive;
- (id)keyPath;
- (void)setAdditive:(BOOL)a0;
- (void)setAutoreverses:(BOOL)a0;
- (id)description;
- (void)setRepeatCount:(float)a0;
- (double)timeOffset;
- (double)repeatDuration;
- (void)dealloc;
- (BOOL)autoreverses;
- (void)setTimeOffset:(double)a0;
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
