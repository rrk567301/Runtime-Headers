@class NSString, NSArray, SCNTimingFunction, NSMutableDictionary;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding> {
    struct __C3DAnimation { } *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _usesSceneTimeBase;
    BOOL _fillForward;
    BOOL _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    id /* block */ _animationDidStart;
    id /* block */ _animationDidStop;
    NSMutableDictionary *_userInfo;
    id _caAnimationCache;
    id _userAnimation;
    BOOL _didMutate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic, getter=isAppliedOnCompletion) BOOL appliedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) double startDelay;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL fillsForward;
@property (nonatomic) BOOL fillsBackward;
@property (nonatomic) BOOL usesSceneTimeBase;
@property (copy, nonatomic) id /* block */ animationDidStart;
@property (copy, nonatomic) id /* block */ animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) BOOL additive;
@property (nonatomic, getter=isCumulative) BOOL cumulative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithCAAnimation:(id)a0;
+ (id)animationWithMDLTransform:(id)a0;
+ (id)animationNamed:(id)a0;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation { } *)a0;
+ (id)animationWithContentsOfURL:(id)a0;
+ (id)animationFromScene:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)a0;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (void)_didMutate;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (void)_syncObjCModel;
- (const void *)__CFObject;
- (id)userAnimation;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (struct __C3DAnimation { } *)animationRef;
- (id)caAnimation;
- (void)_setAnimationRef:(struct __C3DAnimation { } *)a0;
- (id)initWithC3DAnimation:(struct __C3DAnimation { } *)a0;
- (id)initWithCAAnimation:(id)a0;
- (void)_optimizeKeyframesWithTarget:(id)a0;
- (id)subAnimations;

@end
