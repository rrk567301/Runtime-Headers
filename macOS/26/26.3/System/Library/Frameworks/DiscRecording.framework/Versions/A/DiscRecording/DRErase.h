@interface DRErase : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (id)eraseForDevice:(id)a0;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (id)properties;
- (void)finalize;
- (id)valueForUndefinedKey:(id)a0;
- (void)setProperties:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)device;
- (void)start;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (unsigned long long)_cfTypeID;
- (id)description;
- (id)init;
- (int)_start;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)status;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (struct DREraserObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; struct DROpticalDevice *x8; struct DREraseStatus *x9; struct DRThreadObject *x10; struct __CFString *x11; BOOL x12; } *)_obj;
- (id)eraseType;
- (void)setEraseType:(id)a0;

@end
