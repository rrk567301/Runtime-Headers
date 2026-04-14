@interface nwswifttls.STLSClientHandshaker : NSObject <nwswifttls.STLSHandshaker> {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
    void /* unknown type, empty encoding */ readEncryptionLevel;
    void /* unknown type, empty encoding */ writeEncryptionLevel;
    void /* unknown type, empty encoding */ receivedSessionTickets;
    void /* unknown type, empty encoding */ latestError;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasSessionState;
- (id)startHandshake;
- (int)getErrorCode;
- (id)getClientRandom;
- (id)getSessionState;
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
- (id)init:(id)a0 quicTransportParameters:(id)a1 alpn:(id)a2 sessionState:(id)a3 ticketRequest:(id)a4 pakeContext:(id)a5 pakeClientIdentity:(id)a6 pakeServerIdentity:(id)a7 pakeClientPasswordVerifier:(id)a8;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 sessionState:(id)a4 ticketRequest:(id)a5 keyExchangeGroup:(unsigned short)a6 enableEarlyData:(BOOL)a7;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 sessionState:(id)a4 ticketRequest:(id)a5 keyExchangeGroup:(unsigned short)a6 externalPreSharedKey:(id)a7 rawEPSKsEnabled:(BOOL)a8 enableEarlyData:(BOOL)a9;
- (long long)isImplemented;
- (id)validateAuthenticatorWithAuthenticator:(id)a0 context:(id)a1 keyParser:(id /* block */)a2;

@end
