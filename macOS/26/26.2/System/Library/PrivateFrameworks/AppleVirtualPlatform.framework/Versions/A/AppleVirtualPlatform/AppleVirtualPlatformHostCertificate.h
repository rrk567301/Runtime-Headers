@class AppleVirtualPlatformHostKey;

@interface AppleVirtualPlatformHostCertificate : NSObject {
    AppleVirtualPlatformHostKey *_avpHostKey;
}

@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *hostKey;
@property (readonly, nonatomic) struct __SecCertificate { } *leafCertificate;
@property (readonly, nonatomic) struct __SecCertificate { } *intermediateCertificate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)dataRepresentationWithCachedData:(id)a0 error:(id *)a1;

@end
