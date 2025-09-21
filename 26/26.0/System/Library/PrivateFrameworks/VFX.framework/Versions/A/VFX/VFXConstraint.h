@class NSString, VFXWorld, NSArray, VFXOrderedDictionary, NSMutableDictionary;

@interface VFXConstraint : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSCopying, NSSecureCoding, VFXAnimatable> {
    struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *_constraintRef;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    VFXConstraint *_presentationObject;
    unsigned char _isPresentationObject : 1;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
    BOOL _incremental;
    float _influenceFactor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) float influenceFactor;
@property (nonatomic, getter=isIncremental) BOOL incremental;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;

+ (id)presentationConstraintWithConstraintRef:(struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;

- (void)commonInit;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)name;
- (void)addAnimation:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)a0;
- (struct __CFXAnimationManager { } *)animationManager;
- (void *)__CFObject;
- (void)_syncObjCAnimations;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)constraintRef;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (void)finalizeDecodeConstraint:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)setConstraintRef:(struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;
- (void)unbindAnimatablePath:(id)a0;
- (void)setWorld:(id)a0;
- (void)_vfxDeprecatedAddAnimation:(id)a0 forKey:(id)a1;
- (void)_copyBindingsFrom:(id)a0;
- (void)_setSourceObject:(id)a0 forBinding:(id)a1;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (void)addWorldReference:(id)a0;
- (void)didInitConstraintRef;
- (void)enumerateAnimationReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initPresentationConstraintWithConstraintRef:(struct __CFXConstraint { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; float x2; BOOL x3; BOOL x4; struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } x5; void *x6; } *)a0;
- (BOOL)isPresentationObject;
- (id)presentationConstraint;
- (void)removeWorldReference:(id)a0;

@end
