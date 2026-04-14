@class NSArray, NSString, _TtC3VFX15VFXEntityObject, _TtC3VFX20EntityPropertyHelper, VFXWorld, NSMutableDictionary;

@interface VFXCoreEntityHandle : NSObject <VFXWorldReference, VFXReferenceEnumerable, NSCopying, NSSecureCoding> {
    _TtC3VFX15VFXEntityObject *_entityObject;
    struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; int x4; BOOL x5; void *x6; } *_handle;
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    BOOL _isPresentationObject;
    BOOL _muteWorldChange;
    NSMutableDictionary *_bindings;
    NSString *_tag;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bindingNames;
@property (readonly, nonatomic) NSArray *privateBindingNames;
@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) _TtC3VFX15VFXEntityObject *entityObject;
@property (readonly, nonatomic) _TtC3VFX20EntityPropertyHelper *entityHelper;
@property (nonatomic) BOOL muteWorldChange;
@property (readonly, nonatomic) NSArray *bindings;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleWithEntityObject:(id)a0;
+ (id)presentationHandleWithCFXCoreEntityHandle:(struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; int x4; BOOL x5; void *x6; } *)a0;
+ (id)presentationHandleWithEntityObject:(id)a0;

- (void)setTag:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; int x4; BOOL x5; void *x6; } *)handle;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)valueForKeyPath:(id)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithTag:(id)a0;
- (void *)__CFObject;
- (void)setWorld:(id)a0;
- (id)bindingValueForKey:(id)a0;
- (BOOL)setBindingValue:(void *)a0 size:(unsigned long long)a1 forKey:(id)a2;
- (id)bindingPresentationValueForKey:(id)a0;
- (id)__bindings;
- (id)_bindingNames:(BOOL)a0;
- (void)_updateModelFromPresentation;
- (void)_updatePresentationFromModel;
- (void)addWorldReference:(id)a0;
- (id)bindingDataForKey:(id)a0;
- (id)bindingForKey:(id)a0;
- (void)didAttachToWorld:(id)a0;
- (void)didDetachFromWorld:(id)a0;
- (void)didSetEntityObject;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCoreEntityHandleRef:(struct __CFXCoreEntityHandle { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; struct __CFArray *x3; int x4; BOOL x5; void *x6; } *)a0;
- (id)initWithEntityObject:(id)a0;
- (void)invalidateHelper;
- (id)presentationBindingForKey:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)resolveTag:(id)a0 remap:(id)a1;
- (BOOL)setBindingData:(id)a0 forKey:(id)a1;
- (BOOL)setBindingValue:(id)a0 forKey:(id)a1;

@end
