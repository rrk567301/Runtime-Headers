@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)values;
- (id)keyPath;
- (double)duration;
- (void)setDuration:(double)a0;
- (void)setValues:(id)a0;
- (void)setTimingFunction:(id)a0;
- (void)setKeyPath:(id)a0;
- (void)setSpeed:(float)a0;
- (void)setAutoreverses:(BOOL)a0;
- (void)setRepeatCount:(float)a0;
- (double)repeatDuration;
- (float)repeatCount;
- (float)speed;
- (BOOL)autoreverses;
- (void)setFillMode:(id)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (id)timingFunction;
- (void)setKeyTimes:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (void)setTimeOffset:(double)a0;
- (void)setAdditive:(BOOL)a0;
- (BOOL)isRemovedOnCompletion;
- (id)fillMode;
- (double)timeOffset;
- (void)setRepeatDuration:(double)a0;
- (BOOL)additive;
- (id)keyTimes;
- (id)timingFunctions;
- (id)tensionValues;
- (id)continuityValues;
- (id)biasValues;
- (void)setTensionValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setBiasValues:(id)a0;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (BOOL)cumulative;
- (void)setCumulative:(BOOL)a0;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (void)_convertToCA;
- (void)_clearC3DCache;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (id)animationEvents;

@end
