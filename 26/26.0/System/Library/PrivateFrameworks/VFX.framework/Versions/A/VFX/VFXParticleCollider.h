@class NSString, VFXWorld, VFXCoreEntityHandle;

@interface VFXParticleCollider : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXCopyingRemappable, NSCopying, NSSecureCoding> {
    unsigned char _isPresentationObject : 1;
    VFXCoreEntityHandle *_coreHandle;
    VFXWorld *_world;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)particleColliderWithEntityHandle:(id)a0;
+ (id)particleColliderWithEntityObject:(id)a0;
+ (id)presentationParticleColliderWithEntityHandle:(id)a0;

- (id)tag;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void *)__CFObject;
- (BOOL)isPausedOrPausedByInheritance;
- (void)setWorld:(id)a0;
- (id)entityObject;
- (void)_patchCoreEntityHandle:(id)a0;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (void)addWorldReference:(id)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (id)coreEntityHandle;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; int x4; BOOL x5; void *x6; } *)coreEntityHandleRef;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initPresentationWithEntityHandle:(id)a0;
- (id)initWithCoreEntityHandle:(id)a0;
- (id)initWithEntityHandle:(id)a0;
- (void)removeWorldReference:(id)a0;

@end
