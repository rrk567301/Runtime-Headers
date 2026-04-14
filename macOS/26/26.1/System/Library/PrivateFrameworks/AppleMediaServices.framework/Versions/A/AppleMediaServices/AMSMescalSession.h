@class AMSMescalFairplaySession;

@interface AMSMescalSession : NSObject {
    AMSMescalFairplaySession *_session;
}

+ (id)primeSession;
+ (id)defaultSession;
+ (id)sessionWithType:(long long)a0;

- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)signData:(id)a0 bag:(id)a1;
- (id)primeSignatureForData:(id)a0 bag:(id)a1;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2;
- (id)initWithType:(long long)a0;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (id)_cachedCertData;
- (void).cxx_destruct;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)verifyPrimeSignature:(id)a0;
- (id)_cachedCertPath;

@end
