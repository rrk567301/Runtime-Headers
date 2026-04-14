@class NSString, VFXWorld, NSArray, NSMutableDictionary, VFXOrderedDictionary;

@interface VFXCameraEffect : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXAnimatable, NSCopying, NSSecureCoding> {
    void *_cameraEffect;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    BOOL _isPresentationObject;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    VFXOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    BOOL _enabled;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;
@property (readonly) id presentationObject;

+ (id)presentationCameraEffectWithCameraEffectRef:(struct __CFXCameraEffect { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)valueForKeyPath:(id)a0;
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
- (void)removeAllAnimationsWithBlendOutDuration:(float)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(float)a1;
- (void)unbindAnimatablePath:(id)a0;
- (void)setWorld:(id)a0;
- (void)_vfxDeprecatedAddAnimation:(id)a0 forKey:(id)a1;
- (void *)createCFXObject;
- (void)_copyBindingsFrom:(id)a0;
- (void)_setSourceObject:(id)a0 forBinding:(id)a1;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (id)_valueForSimdVectorKeyPath:(id)a0;
- (id)_vfxAnimationForKey:(id)a0;
- (id)_vfxBindings;
- (void)addWorldReference:(id)a0;
- (void)enumerateAnimationReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initPresentationCameraEffectWithCameraEffectRef:(void *)a0;
- (BOOL)isPresentationObject;
- (BOOL)rawFloat2ForKey:(id)a0 value:(void *)a1;
- (BOOL)rawFloat3ForKey:(id)a0 value:(void *)a1;
- (void)removeWorldReference:(id)a0;

@end
