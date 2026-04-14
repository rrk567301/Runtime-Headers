@interface AskToDaemon.Server : _TtCs12_SwiftObject <AskToCore.ATDaemonProtocol> {
    void /* unknown type, empty encoding */ knownClientsWithNonAskToFlows;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ imessageSender;
    void /* unknown type, empty encoding */ clientResponseTaskMapper;
    void /* unknown type, empty encoding */ sendAskFlowPresenter;
    void /* unknown type, empty encoding */ pendingAskStore;
    void /* unknown type, empty encoding */ communicationLimitsSettings;
    void /* unknown type, empty encoding */ contactsSyncVerifier;
    void /* unknown type, empty encoding */ questionPreocessors;
}

- (void)deliverResponseWithResponse:(id)a0 toClientWithBundleIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)canManageContactsFor:(long long)a0 reply:(id /* block */)a1;
- (void)knownHandlesFrom:(id)a0 reply:(id /* block */)a1;
- (void)markAskMessageComposeRequestAsSent:(id)a0 reply:(id /* block */)a1;
- (void)payloadForSendRequestWithQuestion:(id)a0 recipientGroup:(short)a1 clientPayload:(id)a2 shouldValidateSendDestinations:(BOOL)a3 reply:(id /* block */)a4;
- (void)screenTimeDidReceiveAnswer:(id)a0 forRequestWithID:(id)a1 responderDSID:(id)a2 reply:(id /* block */)a3;
- (void)sendResponse:(id)a0 to:(id)a1 requestMessageGUID:(id)a2 reply:(id /* block */)a3;
- (void)sendWithQuestion:(id)a0 to:(short)a1 reply:(id /* block */)a2;
- (void)validateCurrentUserCanComposeMessageWithGroup:(short)a0 reply:(id /* block */)a1;

@end
