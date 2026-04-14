@interface DRErase : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)eraseForDevice:(id)a0;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (unsigned long long)_cfTypeID;
- (void)finalize;
- (id)initWithDevice:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForUndefinedKey:(id)a0;
- (void)setProperties:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)properties;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)status;
- (id)device;
- (void)forwardInvocation:(id)a0;
- (void)start;
- (id)description;
- (int)_start;
- (id)init;
- (void)dealloc;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (struct DREraserObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; struct DROpticalDevice *x8; struct DREraseStatus *x9; struct DRThreadObject *x10; struct __CFString *x11; BOOL x12; } *)_obj;
- (id)eraseType;
- (void)setEraseType:(id)a0;

@end
