@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)values;
- (double)duration;
- (id)keyPath;
- (void)setDuration:(double)a0;
- (double)repeatDuration;
- (id)fillMode;
- (void)setAutoreverses:(BOOL)a0;
- (BOOL)isRemovedOnCompletion;
- (void)setKeyTimes:(id)a0;
- (void)setAdditive:(BOOL)a0;
- (void)setTimingFunctions:(id)a0;
- (void)setTimeOffset:(double)a0;
- (void)setSpeed:(float)a0;
- (BOOL)autoreverses;
- (void)setFillMode:(id)a0;
- (void)setRepeatCount:(float)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (id)timingFunction;
- (float)repeatCount;
- (void)setKeyPath:(id)a0;
- (float)speed;
- (void)setTimingFunction:(id)a0;
- (void)setValues:(id)a0;
- (double)timeOffset;
- (void)setRepeatDuration:(double)a0;
- (BOOL)additive;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (void)setCumulative:(BOOL)a0;
- (BOOL)cumulative;
- (id)keyTimes;
- (id)timingFunctions;
- (id)tensionValues;
- (void)setTensionValues:(id)a0;
- (id)continuityValues;
- (void)setContinuityValues:(id)a0;
- (id)biasValues;
- (void)setBiasValues:(id)a0;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (BOOL)commitsOnCompletion;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;
- (void)setAnimationEvents:(id)a0;
- (id)animationEvents;
- (void)_convertToCA;
- (void)_clearC3DCache;

@end
