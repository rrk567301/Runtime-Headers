@interface nwswifttls.STLSHandshaker : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
    void /* unknown type, empty encoding */ receivedSessionTickets;
    void /* unknown type, empty encoding */ latestError;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasSessionState;
- (id)startHandshake;
- (id)getSessionState;
- (id)getClientRandom;
- (id)continueHandshake:(id)a0;
- (BOOL)getEarlyDataAccepted;
- (long long)getEncryptionLevel;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (int)getErrorCode;
- (long long)getNegotiatedCiphersuite;
- (id)getPeerQUICTransportParameters;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 sessionState:(id)a4 ticketRequest:(id)a5 useX25519KeyExchange:(BOOL)a6;
- (long long)isImplemented;
- (id)validateAuthenticatorWithAuthenticator:(id)a0 context:(id)a1 keyParser:(id /* block */)a2;

@end
