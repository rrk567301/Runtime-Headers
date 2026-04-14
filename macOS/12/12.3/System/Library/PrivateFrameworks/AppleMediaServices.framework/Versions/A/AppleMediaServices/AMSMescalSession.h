@class AMSMescalFairPlay, NSData, AMSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AMSMescalSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_certificateData;
    AMSURLSession *_urlSession;
    AMSMescalFairPlay *_fairPlayContext;
    long long _mescalType;
}

+ (id)defaultSession;
+ (id)sessionWithType:(long long)a0;
+ (id)primeSession;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2 error:(id *)a3;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)_establishContextWithBag:(id)a0 error:(id *)a1;
- (BOOL)_shouldRetryFairPlayForError:(id)a0;
- (void)_resetSession;
- (id)_cachedCertPath;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (BOOL)_verifyEntitlements;
- (id)_loadCertificateDataWithBag:(id)a0 error:(id *)a1;
- (id)_postExchangeData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)_cachedCertData;

@end
