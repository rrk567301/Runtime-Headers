@class NSString, NSArray, SCNTimingFunction, NSMutableDictionary;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding> {
    struct __C3DAnimation { } *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    char _autoreverses;
    char _removedOnCompletion;
    char _applyOnCompletion;
    char _additive;
    char _cumulative;
    char _usesSceneTimeBase;
    char _fillForward;
    char _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    id /* block */ _animationDidStart;
    id /* block */ _animationDidStop;
    NSMutableDictionary *_userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userInfoLock;
    id _caAnimationCache;
    id _userAnimation;
    char _didMutate;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isRemovedOnCompletion) char removedOnCompletion;
@property (nonatomic, getter=isAppliedOnCompletion) char appliedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) char autoreverses;
@property (nonatomic) double startDelay;
@property (nonatomic) double timeOffset;
@property (nonatomic) char fillsForward;
@property (nonatomic) char fillsBackward;
@property (nonatomic) char usesSceneTimeBase;
@property (copy, nonatomic) id /* block */ animationDidStart;
@property (copy, nonatomic) id /* block */ animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) char additive;
@property (nonatomic, getter=isCumulative) char cumulative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationNamed:(id)a0;
+ (id)animationFromScene:(id)a0;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation { } *)a0;
+ (id)animationWithCAAnimation:(id)a0;
+ (id)animationWithContentsOfURL:(id)a0;
+ (id)animationWithMDLTransform:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)a0;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)a0;
- (void)setFadeOutDuration:(double)a0;
- (void)_didMutate;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (void)_optimizeKeyframesWithTarget:(id)a0;
- (void)_setAnimationRef:(struct __C3DAnimation { } *)a0;
- (struct __C3DAnimation { } *)animationRef;
- (id)caAnimation;
- (id)initWithC3DAnimation:(struct __C3DAnimation { } *)a0;
- (id)initWithCAAnimation:(id)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (id)subAnimations;
- (id)userAnimation;

@end
