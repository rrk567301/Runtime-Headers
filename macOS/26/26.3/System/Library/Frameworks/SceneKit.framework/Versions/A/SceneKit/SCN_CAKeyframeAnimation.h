@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setSpeed:(float)a0;
- (double)duration;
- (id)timingFunction;
- (void)setTimingFunction:(id)a0;
- (id)keyPath;
- (float)speed;
- (id)description;
- (BOOL)isAdditive;
- (BOOL)additive;
- (void)setRepeatDuration:(double)a0;
- (id)fillMode;
- (void)setAutoreverses:(BOOL)a0;
- (void)setValues:(id)a0;
- (void)setAdditive:(BOOL)a0;
- (id)values;
- (void)setTimeOffset:(double)a0;
- (void)setKeyPath:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDuration:(double)a0;
- (BOOL)autoreverses;
- (void)dealloc;
- (double)repeatDuration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)timeOffset;
- (float)repeatCount;
- (void)setRepeatCount:(float)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setFillMode:(id)a0;
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
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)animationEvents;
- (void)_clearC3DCache;
- (void)_convertToCA;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;

@end
