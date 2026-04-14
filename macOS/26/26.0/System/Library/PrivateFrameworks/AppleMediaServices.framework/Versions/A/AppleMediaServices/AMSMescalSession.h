@class AMSMescalFairplaySession;

@interface AMSMescalSession : NSObject {
    AMSMescalFairplaySession *_session;
}

+ (id)sessionWithType:(long long)a0;
+ (id)primeSession;
+ (id)defaultSession;

- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)initWithType:(long long)a0;
- (id)verifyPrimeSignature:(id)a0;
- (id)_cachedCertData;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (id)signData:(id)a0 bag:(id)a1;
- (id)_cachedCertPath;
- (id)primeSignatureForData:(id)a0 bag:(id)a1;
- (id)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2;
- (void).cxx_destruct;

@end
