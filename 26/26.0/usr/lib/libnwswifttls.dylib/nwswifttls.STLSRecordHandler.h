@interface nwswifttls.STLSRecordHandler : NSObject {
    void /* unknown type, empty encoding */ recordHandler;
    void /* unknown type, empty encoding */ logString;
}

- (id)init;
- (void).cxx_destruct;
- (void)startHandshake;
- (int)getErrorCode;
- (void)addApplicationData:(id)a0;
- (void)sendCloseNotify;
- (BOOL)alertSentOrReceived;
- (long long)getAvailableApplicationDataLength;
- (id)getAvailableApplicationDataWithNumBytes:(long long)a0;
- (unsigned int)getBytesToReadCount;
- (BOOL)getEPSKOffered;
- (long long)getNegotiatedCiphersuite;
- (BOOL)getNegotiatedEPSK;
- (id)getNegotiatedGroup;
- (long long)getNegotiatedPAKE;
- (unsigned int)getOutgoingBytesCount;
- (id)getOutput;
- (id)getOutputWithNumBytes:(long long)a0;
- (BOOL)getPAKEOffered;
- (id)init:(id)a0 alpn:(id)a1 pakeContext:(id)a2 pakeClientIdentity:(id)a3 pakeServerIdentity:(id)a4 pakePasswordVerifier:(id)a5 logStr:(id)a6;
- (id)init:(id)a0 alpn:(id)a1 sessionState:(id)a2 ticketRequest:(id)a3 pakeContext:(id)a4 pakeClientIdentity:(id)a5 pakeServerIdentity:(id)a6 pakeClientPasswordVerifier:(id)a7 logStr:(id)a8;
- (id)init:(id)a0 serverKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 alpn:(id)a2 EPSKs:(id)a3 epskSelectionBlock:(id /* block */)a4 rawEPSKsEnabled:(BOOL)a5 enableEarlyData:(BOOL)a6 logStr:(id)a7;
- (id)init:(id)a0 serverName:(id)a1 alpn:(id)a2 sessionState:(id)a3 ticketRequest:(id)a4 keyExchangeGroup:(unsigned short)a5 enableEarlyData:(BOOL)a6 logStr:(id)a7;
- (id)init:(id)a0 serverName:(id)a1 alpn:(id)a2 sessionState:(id)a3 ticketRequest:(id)a4 keyExchangeGroup:(unsigned short)a5 externalPreSharedKey:(id)a6 rawEPSKsEnabled:(BOOL)a7 enableEarlyData:(BOOL)a8 logStr:(id)a9;
- (BOOL)isHandshakeComplete;
- (void)processNetworkDataWithNetworkDataIn:(id)a0;

@end
