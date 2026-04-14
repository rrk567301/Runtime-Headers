@class STSXPCClientNotificationListener, STSCredential, NFSession;
@protocol STSSessionNotificationTesterDelegate;

@interface ISO18013Handler : STSTransactionHandler <STSXPCClientNotificationListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handoverSessionMutex;
    STSXPCClientNotificationListener *_stsNotificationListener;
    id<STSSessionNotificationTesterDelegate> _notificationTesterDelegate;
    NFSession *_handoverSession;
    unsigned long long _transactionState;
    STSCredential *_releasedCredential;
}

- (void).cxx_destruct;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)stopTransaction;
- (id)activateWithDelegate:(id)a0 handoffToken:(id)a1;
- (void)transactionStarted:(unsigned long long)a0;
- (void)transactionEndedWithIdentifier:(id)a0 error:(id)a1;
- (void)xpcInvalidated;
- (void)xpcInterrupted;
- (void)notificationClientConnected;
- (void)alternativeCarrierReceived:(id)a0 dataPending:(BOOL)a1;
- (void)alternativeCarrierConnectedWithStatus:(unsigned long long)a0;
- (void)alternativeCarrierDisconnectedWithStatus:(unsigned long long)a0;
- (void)processISO18013CredentialProposals:(id)a0 readerAuthInfo:(id)a1;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (unsigned char)supportedCredentialType;

@end
