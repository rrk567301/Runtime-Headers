@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    char _caReady;
}

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
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
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)animationEvents;
- (void)_clearC3DCache;
- (void)_convertToCA;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (char)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)setCommitsOnCompletion:(char)a0;
- (void)setUsesSceneTimeBase:(char)a0;
- (char)usesSceneTimeBase;

@end
