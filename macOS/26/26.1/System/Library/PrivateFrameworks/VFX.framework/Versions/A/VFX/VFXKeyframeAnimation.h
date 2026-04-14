@interface VFXKeyframeAnimation : CAKeyframeAnimation {
    struct __CFXKeyframedAnimation { } *_cfxAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)additive;
- (void)setAutoreverses:(BOOL)a0;
- (double)timeOffset;
- (id)keyPath;
- (double)repeatDuration;
- (void)setFillMode:(id)a0;
- (float)repeatCount;
- (void)setRepeatDuration:(double)a0;
- (BOOL)autoreverses;
- (void)setTimingFunction:(id)a0;
- (void)setRepeatCount:(float)a0;
- (BOOL)isAdditive;
- (void)setSpeed:(float)a0;
- (float)speed;
- (void)setTimeOffset:(double)a0;
- (id)timingFunction;
- (id)fillMode;
- (void)setKeyPath:(id)a0;
- (id)values;
- (id)description;
- (void)dealloc;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setValues:(id)a0;
- (void)setDuration:(double)a0;
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
