@interface DRSession : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (BOOL)isPropertyKey:(id)a0;
+ (void)setupBindings;

- (void)finalize;
- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (void)setProperties:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)valueForUndefinedKey:(id)a0;
- (id)properties;
- (id)description;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)tracks;
- (id)methodSignatureForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (id)initWithCDText:(id)a0;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (struct DRSessionObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; void /* function */ *x7; struct __CFArray *x8; unsigned short x9; unsigned int x10; unsigned short x11; } *)_obj;
- (int)_postBurnCallback;
- (int)_preBurnCallback:(id)a0;
- (int)_produceLeadInCallback:(struct DRSessionProductionInfo { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; long long x4; } *)a0;
- (id)initWithProperties:(id)a0 callback:(void /* function */ *)a1;
- (id)initWithProperties:(id)a0 producer:(id)a1;
- (void)setTracks:(id)a0;

@end
