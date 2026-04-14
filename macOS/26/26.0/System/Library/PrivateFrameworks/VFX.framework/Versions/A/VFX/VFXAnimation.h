@class NSString, VFXTimingFunction, NSArray, CAAnimation, VFXWorld, NSMutableDictionary;

@interface VFXAnimation : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXAnimation, NSCopying, NSSecureCoding> {
    struct __CFXAnimation { } *_animationRef;
    NSString *_keyPath;
    double _duration;
    float _repeatCount;
    double _timeOffset;
    double _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _fillForward;
    BOOL _fillBackward;
    VFXTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    id /* block */ _animationDidStart;
    id /* block */ _animationDidStop;
    NSMutableDictionary *_userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userInfoLock;
    id _caAnimationCache;
    id _userAnimation;
    BOOL _didMutate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) VFXTimingFunction *timingFunction;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic) float repeatCount;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) double beginTime;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL fillsForward;
@property (nonatomic) BOOL fillsBackward;
@property (copy, nonatomic) id /* block */ animationDidStart;
@property (copy, nonatomic) id /* block */ animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) BOOL additive;
@property (nonatomic, getter=isCumulative) BOOL cumulative;
@property (readonly, nonatomic) CAAnimation *caAnimation;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationNamed:(id)a0;
+ (id)animationWithCAAnimation:(id)a0;
+ (id)animationWithContentsOfURL:(id)a0;
+ (id)animationWithMDLTransform:(id)a0;
+ (long long)componentCountAtKeyPath:(id)a0 target:(id)a1;
+ (id)animationFromWorld:(id)a0;
+ (id)animationWithCFXAnimation:(struct __CFXAnimation { } *)a0;

- (float)repeatDuration;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setRepeatDuration:(float)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_didMutate;
- (void *)__CFObject;
- (double)blendInDuration;
- (void)_optimizeKeyframesWithTarget:(id)a0;
- (void)_setAnimationRef:(struct __CFXAnimation { } *)a0;
- (struct __CFXAnimation { } *)animationRef;
- (double)blendOutDuration;
- (id)initWithCAAnimation:(id)a0;
- (BOOL)isAppliedOnCompletion;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (void)setAppliedOnCompletion:(BOOL)a0;
- (void)setBlendInDuration:(double)a0;
- (void)setBlendOutDuration:(double)a0;
- (id)subAnimations;
- (id)userAnimation;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (id)decodeAnimation:(id)a0;
- (id)encodeAnimation:(id)a0;
- (id)initWithCFXAnimation:(struct __CFXAnimation { } *)a0;

@end
