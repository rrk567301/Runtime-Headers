@interface DRBurn : NSObject {
    void *_ref;
}

+ (void)initialize;
+ (void)setupBindings;
+ (id)burnForDevice:(id)a0;
+ (BOOL)isPropertyKey:(id)a0;
+ (id)layoutForImageFile:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (struct DRBurnObject { void /* function */ **x0; struct DRMutex { struct DRMutexObject *x0; } x1; void *x2; struct DRRefConCallbacks { unsigned long long x0; void /* function */ *x1; void /* function */ *x2; } x3; struct __CFDictionary *x4; struct __DRType *x5; void *x6; struct DRMutex { struct DRMutexObject *x0; } x7; struct DRDeviceObject *x8; struct BurnController *x9; struct BurnManager *x10; struct DRBurnStatus *x11; unsigned int x12; unsigned int x13; void *x14; struct __CFArray *x15; struct __CFDate *x16; } *)_obj;
- (unsigned long long)_cfTypeID;
- (id)valueForUndefinedKey:(id)a0;
- (id)device;
- (id)status;
- (id)initWithDevice:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)properties;
- (void)setProperties:(id)a0;
- (void)abort;
- (void)writeLayout:(id)a0;
- (float)requestedBurnSpeed;
- (void)setRequestedBurnSpeed:(float)a0;
- (BOOL)appendable;
- (void)setAppendable:(BOOL)a0;
- (BOOL)verifyDisc;
- (void)setVerifyDisc:(BOOL)a0;
- (id)completionAction;
- (void)setCompletionAction:(id)a0;
- (BOOL)burnUnderrunProtection;
- (void)setBurnUnderrunProtection:(BOOL)a0;
- (BOOL)testBurn;
- (void)setTestBurn:(BOOL)a0;
- (BOOL)_burnWriteLayoutPatchFixAvailable;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)a0;
- (id)_DiscRecording_KVCGetterPlaceholder;

@end
