@class NSDate;

@interface PKTrust : NSObject {
    struct __SecTrust { } *_trustRef;
    struct __SecPolicy { } *_policyRef;
    unsigned int _trustResult;
    int _trustLevel;
    NSDate *_signingDate;
    char _signingDateIsTrusted;
    char _appleRootMode;
    char _allowExpiredCertificates;
    char _allowExpiredRoots;
}

+ (id)stringForTrustLevel:(int)a0;

- (void)dealloc;
- (char)evaluateTrustReturningError:(id *)a0;
- (id)certificateChain;
- (int)trustLevel;
- (struct __SecCertificate { } *)_anchorCertificateFromEvaluation;
- (void)_enterAppleRootMode;
- (char)_enterDateSignedMode;
- (char)_evaluateTrustAtLevel:(int)a0 isDevelopmentSigned:(char *)a1;
- (char)_isTrustedAsRootCertificate:(struct __SecCertificate { } *)a0 inDomain:(unsigned int)a1;
- (char)_restoreCurrentDateMode;
- (char)_restoreSystemTrustMode;
- (char)_setCurrentPolicyWithOID:(struct cssm_data { unsigned long long x0; char *x1; })a0;
- (id)initWithCertificates:(id)a0 usingAppleRoot:(char)a1 signatureDate:(id)a2;
- (id)initWithSecTrust:(struct __SecTrust { } *)a0 usingAppleRoot:(char)a1 signatureDate:(id)a2;
- (void)setAllowExpiredCertificates:(char)a0;
- (void)setAllowExpiredRoots:(char)a0;
- (struct __SecTrust { } *)trustRef;
- (unsigned int)trustResult;

@end
