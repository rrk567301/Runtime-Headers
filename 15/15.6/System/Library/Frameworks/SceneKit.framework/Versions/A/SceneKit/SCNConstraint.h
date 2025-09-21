@class NSArray, NSString, NSMutableDictionary, SCNOrderedDictionary;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *_constraintRef;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    char _enabled;
    char _incremental;
    double _influenceFactor;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) double influenceFactor;
@property (nonatomic, getter=isIncremental) char incremental;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)copyTo:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)animationForKey:(id)a0;
- (void)commonInit;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (void)addAnimation:(id)a0;
- (id)scene;
- (struct __C3DAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (void)pauseAnimationForKey:(id)a0;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (char)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(char)a0 forKey:(id)a1 pausedByNode:(char)a2;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)constraintRef;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (void)finalizeDecodeConstraint:(id)a0;
- (char)isAnimationForKeyPaused:(id)a0;
- (char)isPausedOrPausedByInheritance;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)setConstraintRef:(struct __C3DConstraint { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (void)unbindAnimatablePath:(id)a0;

@end
