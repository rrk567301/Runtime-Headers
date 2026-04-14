@interface SecureMessagingAgentCore.XPCDaemon : _TtCs12_SwiftObject <_TtPO15SecureMessaging8XPCUtils17XPCDaemonProtocol_> {
    void /* unknown type, empty encoding */ interfaceProvider;
    void /* unknown type, empty encoding */ clientConnection;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ featureFlagStore;
}

- (void)deliveryInterfaceWithCompletion:(id /* block */)a0;
- (void)observingRegistrationInterfaceWithCompletion:(id /* block */)a0;
- (void)registrationInterfaceWithCompletion:(id /* block */)a0;

@end
