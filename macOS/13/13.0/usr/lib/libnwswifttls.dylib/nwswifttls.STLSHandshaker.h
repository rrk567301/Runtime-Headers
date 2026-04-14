@interface nwswifttls.STLSHandshaker : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
}

- (id)init;
- (void).cxx_destruct;
- (id)startHandshake;
- (long long)isImplemented;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 ticketRequest:(id)a4;
- (id)continueHandshake:(id)a0;
- (long long)getEncryptionLevel;
- (id)getClientRandom;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (id)getPeerQUICTransportParameters;
- (long long)getNegotiatedCiphersuite;

@end
