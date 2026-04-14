@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MABAACertManager : NSObject {
    unsigned long long _requestTime;
    unsigned long long _responseTime;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_cachedKey;
    NSArray *_cachedCertArray;
    _Atomic unsigned long long _cachedTime;
}

@property int certType;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *certManagerQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *deviceIdentityQueue;

+ (BOOL)isSupported;
+ (id)keyParameters;
+ (BOOL)_checkIsSupported;
+ (id)certificateParameters;
+ (id)certificateSubject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)copyBase64EncodedCertificateChain:(BOOL)a0 referenceKey:(struct __SecKey **)a1;
- (id)_copyCachedCerts:(struct __SecKey **)a0;
- (id)copyCurrentBootManifestHash;
- (id)copyDeviceIdentityOptionsForCertAndRequestType:(int)a0 skipNetworkRequest:(BOOL)a1 invalidateExistingCert:(BOOL)a2;
- (id)initWithCertType:(int)a0;
- (void)invalidateExistingCertsAndWait;
- (id)issueAndCopyCerts:(struct __SecKey **)a0;
- (id)issueAndCopySelfSignedCert:(struct __SecKey **)a0;
- (void)issueAndWaitForCerts:(unsigned long long)a0;
- (id)issueSelfSignedCertInternal:(struct __SecKey **)a0;
- (BOOL)shouldInvalidateExistingCertificateIfAny;

@end
