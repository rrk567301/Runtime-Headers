@class AMSMescalFairplaySession;

@interface AMSMescalSession : NSObject {
    AMSMescalFairplaySession *_session;
}

+ (id)primeSession;
+ (id)sessionWithType:(long long)a0;
+ (id)defaultSession;

- (id)_cachedCertPath;
- (id)signData:(id)a0 bag:(id)a1;
- (id)initWithType:(long long)a0;
- (id)_cachedCertData;
- (void).cxx_destruct;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)primeSignatureForData:(id)a0 bag:(id)a1;
- (BOOL)_cacheCertData:(id)a0 expiration:(double)a1;
- (id)verifyData:(id)a0 withSignature:(id)a1 bag:(id)a2;
- (id)signData:(id)a0 bag:(id)a1 error:(id *)a2;
- (id)verifyPrimeSignature:(id)a0;
- (id)primeSignatureForData:(id)a0 bag:(id)a1 error:(id *)a2;

@end
