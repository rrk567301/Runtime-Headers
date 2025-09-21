@interface SecureMessagingAgentCore.KDSRegistrationDaemon : NSObject <NSXPCListenerDelegate, _TtPO15SecureMessaging15KDSRegistration17DaemonXPCProtocol_> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ clientXPCServer;
    void /* unknown type, empty encoding */ mlsDaemon;
    void /* unknown type, empty encoding */ mlsDaemonID;
    void /* unknown type, empty encoding */ phoneNumberProvider;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ pushHandler;
    void /* unknown type, empty encoding */ registrationPersister;
    void /* unknown type, empty encoding */ stateMachineNetworkOperator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_keyPackageExchanger;
    void /* unknown type, empty encoding */ heartbeatBGActivity;
    void /* unknown type, empty encoding */ registrationStateMachineBySimUniqueID;
    void /* unknown type, empty encoding */ testPhoneNumber;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)isRegisteredWithSimUniqueID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)setupXPCConnectionWithClient:(id)a0 uniqueClientIdentifier:(id)a1 clientIdentifier:(id)a2 simUniqueID:(id)a3 simLabelID:(id)a4 uriSupportedState:(id)a5 testPhoneNumber:(id)a6 completion:(id /* block */)a7;
- (void)signWithParticipantKeyWithSimUniqueID:(id)a0 input:(id)a1 completion:(id /* block */)a2;
- (void)updateWithSimUniqueID:(id)a0 simLabelID:(id)a1 supportedState:(id)a2 uniqueClientIdentifier:(id)a3 completion:(id /* block */)a4;

@end
