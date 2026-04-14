@interface DRPrepare : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (BOOL)isPropertyKey:(id)a0;
+ (id)prepareForDevice:(id)a0 properties:(id)a1;
+ (void)setupBindings;

- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (void)finalize;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)status;
- (BOOL)isEqual:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)device;
- (void)_setProperties:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)start;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (int)_start;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (struct DRPrepareObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; struct DROpticalDevice *x8; struct DRPrepareStatus *x9; struct DRThreadObject *x10; struct __CFDictionary *x11; struct __CFDictionary *x12; BOOL x13; } *)_obj;
- (id)_properties;
- (id)initWithDevice:(id)a0 properties:(id)a1;

@end
