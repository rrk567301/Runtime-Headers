@interface SecureMessagingAgentCore.KDSRegistrationDaemon : NSObject <_TtPO15SecureMessaging8XPCUtils32RegistrationCollaboratorProtocol_, _TtPO15SecureMessaging8XPCUtils41ObservingRegistrationCollaboratorProtocol_> {
    void /* unknown type, empty encoding */ logger;
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
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)isRegisteredWithSimUniqueID:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)isRegisteredWithUniqueObservingClientIdentifier:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)participantKeyHashWithSimUniqueID:(id)a0 label:(id)a1 completion:(id /* block */)a2;
- (void)participantKeyWithSimUniqueID:(id)a0 completion:(id /* block */)a1;
- (void)setupXPCConnectionWithClient:(id)a0 uniqueClientIdentifier:(id)a1 clientIdentifier:(id)a2 simUniqueID:(id)a3 simLabelID:(id)a4 uriSupportedState:(id)a5 completion:(id /* block */)a6;
- (void)setupXPCConnectionWithObservingClient:(id)a0 uniqueClientIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)signWithParticipantKeyWithSimUniqueID:(id)a0 input:(id)a1 completion:(id /* block */)a2;
- (void)updateWithSimUniqueID:(id)a0 oldSimLabelID:(id)a1 newSimLabelID:(id)a2 uniqueClientIdentifier:(id)a3 completion:(id /* block */)a4;
- (void)updateWithSimUniqueID:(id)a0 simLabelID:(id)a1 supportedState:(id)a2 uniqueClientIdentifier:(id)a3 completion:(id /* block */)a4;

@end
