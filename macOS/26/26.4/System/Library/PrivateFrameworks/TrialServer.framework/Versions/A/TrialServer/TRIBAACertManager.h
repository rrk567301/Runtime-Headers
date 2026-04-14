@class NSArray, NSObject;
@protocol TRIBase64Encoding, OS_dispatch_queue, TRITimeProviding;

@interface TRIBAACertManager : NSObject {
    unsigned long long _requestTime;
    unsigned long long _responseTime;
    struct __SecKey { } *_cachedKey;
    NSArray *_cachedCertArray;
    unsigned long long _cachedTime;
    unsigned long long _cachedCertExpiryTime;
    id<TRIBase64Encoding> _base64Encoder;
    id<TRITimeProviding> _timeProvider;
    NSObject<OS_dispatch_queue> *_certManagerQueue;
    NSObject<OS_dispatch_queue> *_deviceIdentityCallbackQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isSupported;
- (id)_copyDeviceIdentityOptions;
- (id)_getCachedCerts:(struct __SecKey **)a0;
- (void)_issueAndWaitForCerts:(unsigned long long)a0 semaphore:(id)a1 resultKey:(struct __SecKey **)a2 result:(id *)a3;
- (id)copyBase64EncodedCertificateChain:(BOOL)a0 referenceKey:(struct __SecKey **)a1;
- (id)initWithBase64Encoder:(id)a0 timeProvider:(id)a1;
- (id)issueAndGetCerts:(struct __SecKey **)a0;

@end
