@class NSString, VFXWorld, NSArray, VFXAnimation, VFXOrderedDictionary, NSMutableDictionary;

@interface VFXAnimationPlayer : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXAnimatable, NSCopying, NSSecureCoding> {
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    unsigned char _isPresentationObject : 1;
    struct __CFXAnimationPlayer { } *_playerRef;
    float _weight;
    float _speed;
    BOOL _paused;
    unsigned long long _timeSource;
    unsigned long long _timeOrigin;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VFXAnimation *animation;
@property (nonatomic) float speed;
@property (nonatomic) float blendFactor;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;

+ (id)animationPlayerWithAnimation:(id)a0;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __CFXAnimationPlayer { } *)a0;
+ (id)animationPlayerWithVFXAnimation:(id)a0;

- (float)weight;
- (void)setWeight:(float)a0;
- (void)commonInit;
- (void)_setAnimation:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stop;
- (void)encodeWithCoder:(id)a0;
- (void)addAnimation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAllAnimations;
- (void)play;
- (void)removeAnimationForKey:(id)a0;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (struct __CFXAnimationPlayer { } *)animationPlayerRef;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)initWithAnimationPlayerRef:(struct __CFXAnimationPlayer { } *)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)stopWithBlendOutDuration:(double)a0;
- (void)unbindAnimatablePath:(id)a0;
- (void)setTimeOrigin:(unsigned long long)a0;
- (void)setTimeSource:(unsigned long long)a0;
- (void)setWorld:(id)a0;
- (void)_vfxDeprecatedAddAnimation:(id)a0 forKey:(id)a1;
- (unsigned long long)timeSource;
- (void)_copyBindingsFrom:(id)a0;
- (void)_setSourceObject:(id)a0 forBinding:(id)a1;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (void)addWorldReference:(id)a0;
- (void)enumerateAnimationReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithVFXAnimation:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)setUsesAbsoluteTime:(BOOL)a0;
- (unsigned long long)timeOrigin;
- (BOOL)usesAbsoluteTime;

@end
