@class NSData;

@interface MessageProtection.GLTDiversifiedKey : NSObject

@property (nonatomic, readonly) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *diversifiedKey;
@property (nonatomic, readonly) NSData *trackingPreventionSalt;

- (void).cxx_destruct;
- (id)init;

@end
