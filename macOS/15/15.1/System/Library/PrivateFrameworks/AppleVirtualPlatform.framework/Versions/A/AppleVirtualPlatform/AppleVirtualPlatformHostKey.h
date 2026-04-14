@class NSData, NSString, NSFileHandle;

@interface AppleVirtualPlatformHostKey : NSObject {
    NSData *_hostKeyData;
    NSFileHandle *_lockFileHandle;
}

@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *hostKey;
@property (readonly, nonatomic) NSData *uniqueDeviceIdentifier;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifierString;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithError:(id *)a0;
- (id)dataRepresentationWithError:(id *)a0;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;

@end
