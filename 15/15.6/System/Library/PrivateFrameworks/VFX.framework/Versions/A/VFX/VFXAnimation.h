@class NSString, VFXTimingFunction, NSArray, CAAnimation, NSMutableDictionary;

@interface VFXAnimation : NSObject <VFXAnimation, NSCopying, NSSecureCoding> {
    struct __CFXAnimation { } *_animationRef;
    NSString *_keyPath;
    double _duration;
    float _repeatCount;
    double _timeOffset;
    double _beginTime;
    char _autoreverses;
    char _removedOnCompletion;
    char _applyOnCompletion;
    char _additive;
    char _cumulative;
    char _fillForward;
    char _fillBackward;
    VFXTimingFunction *_timingFunction;
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
@property (retain, nonatomic) VFXTimingFunction *timingFunction;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isRemovedOnCompletion) char removedOnCompletion;
@property (nonatomic, getter=isAppliedOnCompletion) char appliedOnCompletion;
@property (nonatomic) float repeatCount;
@property (nonatomic) char autoreverses;
@property (nonatomic) double beginTime;
@property (nonatomic) double timeOffset;
@property (nonatomic) char fillsForward;
@property (nonatomic) char fillsBackward;
@property (copy, nonatomic) id /* block */ animationDidStart;
@property (copy, nonatomic) id /* block */ animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) char additive;
@property (nonatomic, getter=isCumulative) char cumulative;
@property (readonly, nonatomic) CAAnimation *caAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationNamed:(id)a0;
+ (id)animationWithCAAnimation:(id)a0;
+ (id)animationWithContentsOfURL:(id)a0;
+ (id)animationWithMDLTransform:(id)a0;
+ (id)animationFromWorld:(id)a0;
+ (id)animationWithCFXAnimation:(struct __CFXAnimation { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (float)repeatDuration;
- (void)setRepeatDuration:(float)a0;
- (float)fadeOutDuration;
- (float)fadeInDuration;
- (void)setFadeInDuration:(float)a0;
- (void)setFadeOutDuration:(float)a0;
- (void)_didMutate;
- (void *)__CFObject;
- (void)_syncObjCModel;
- (void)_optimizeKeyframesWithTarget:(id)a0;
- (void)_setAnimationRef:(struct __CFXAnimation { } *)a0;
- (struct __CFXAnimation { } *)animationRef;
- (id)initWithCAAnimation:(id)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (id)subAnimations;
- (id)userAnimation;
- (id)decodeAnimation:(id)a0;
- (id)encodeAnimation:(id)a0;
- (id)initWithCFXAnimation:(struct __CFXAnimation { } *)a0;

@end
