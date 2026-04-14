@interface nwswifttls.STLSServerHandshaker : NSObject <nwswifttls.STLSHandshaker> {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
    void /* unknown type, empty encoding */ readEncryptionLevel;
    void /* unknown type, empty encoding */ writeEncryptionLevel;
    void /* unknown type, empty encoding */ latestError;
    void /* unknown type, empty encoding */ clientAppSecret;
}

- (id)init;
- (void).cxx_destruct;
- (int)getErrorCode;
- (id)continueHandshake:(id)a0;
- (BOOL)getEPSKOffered;
- (BOOL)getEarlyDataAccepted;
- (long long)getEncryptionLevelWithWrite:(BOOL)a0;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (long long)getNegotiatedCiphersuite;
- (BOOL)getNegotiatedEPSK;
- (id)getNegotiatedGroup;
- (long long)getNegotiatedPAKE;
- (BOOL)getPAKEOffered;
- (id)getPeerQUICTransportParameters;
- (id)init:(id)a0 quicTransportParameters:(id)a1 alpn:(id)a2 pakeContext:(id)a3 pakeClientIdentity:(id)a4 pakeServerIdentity:(id)a5 pakePasswordVerifier:(id)a6;
- (id)init:(id)a0 serverKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 quicTransportParameters:(id)a2 alpn:(id)a3;
- (id)init:(id)a0 serverKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 quicTransportParameters:(id)a2 alpn:(id)a3 EPSKs:(id)a4 rawEPSKsEnabled:(BOOL)a5 epskSelectionBlock:(id /* block */)a6 enableEarlyData:(BOOL)a7;
- (long long)isImplemented;

@end
