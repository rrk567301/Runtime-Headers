@interface SecureMessagingAgentCore.MLSDaemon : NSObject <NSXPCListenerDelegate, _TtPO15SecureMessaging3MLS17DaemonXPCProtocol_> {
    void /* unknown type, empty encoding */ xpcLogger;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ persister;
    void /* unknown type, empty encoding */ clientXPCServer;
    void /* unknown type, empty encoding */ regClientServer;
    void /* unknown type, empty encoding */ swiftMLSClientByClientID;
    void /* unknown type, empty encoding */ keyPackageProviderByClientID;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addWithUniqueClientIdentifier:(id)a0 members:(id)a1 toGroup:(id)a2 groupOperationContext:(id)a3 completion:(id /* block */)a4;
- (void)applicationEncryptWithUniqueClientIdentifier:(id)a0 data:(id)a1 withGroup:(id)a2 encryptionContext:(id)a3 completion:(id /* block */)a4;
- (void)applicationEncryptWithUniqueClientIdentifier:(id)a0 groupName:(id)a1 withGroup:(id)a2 groupNameEncryptionContext:(id)a3 completion:(id /* block */)a4;
- (void)applicationSignWithUniqueClientIdentifier:(id)a0 input:(id)a1 withGroup:(id)a2 signingContext:(id)a3 completion:(id /* block */)a4;
- (void)createGroupWithUniqueClientIdentifier:(id)a0 identifier:(id)a1 otherMembers:(id)a2 groupCreationContext:(id)a3 completion:(id /* block */)a4;
- (void)deleteWithUniqueClientIdentifier:(id)a0 group:(id)a1 groupDeletionContext:(id)a2 completion:(id /* block */)a3;
- (void)downgradeWithUniqueClientIdentifier:(id)a0 group:(id)a1 downgradeContext:(id)a2 completion:(id /* block */)a3;
- (void)groupWithUniqueClientIdentifier:(id)a0 identifier:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)joinGroupWithUniqueClientIdentifier:(id)a0 identifier:(id)a1 otherMembers:(id)a2 welcome:(id)a3 groupCreationContext:(id)a4 completion:(id /* block */)a5;
- (void)kickWithUniqueClientIdentifier:(id)a0 members:(id)a1 fromGroup:(id)a2 groupOperationContext:(id)a3 completion:(id /* block */)a4;
- (void)leaveWithUniqueClientIdentifier:(id)a0 group:(id)a1 groupOperationContext:(id)a2 completion:(id /* block */)a3;
- (void)otherMembersWithUniqueClientIdentifier:(id)a0 group:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)processIncomingWithUniqueClientIdentifier:(id)a0 errorMessage:(id)a1 withGroup:(id)a2 incomingErrorMessageContext:(id)a3 completion:(id /* block */)a4;
- (void)processIncomingWithUniqueClientIdentifier:(id)a0 failureToDecrypt:(id)a1 withGroup:(id)a2 incomingFailureToDecryptContext:(id)a3 completion:(id /* block */)a4;
- (void)processIncomingWithUniqueClientIdentifier:(id)a0 groupName:(id)a1 forGroup:(id)a2 incomingGroupNameContext:(id)a3 completion:(id /* block */)a4;
- (void)processIncomingWithUniqueClientIdentifier:(id)a0 message:(id)a1 forGroup:(id)a2 incomingMessageContext:(id)a3 completion:(id /* block */)a4;
- (void)processIncomingWithUniqueClientIdentifier:(id)a0 message:(id)a1 incomingMessageContext:(id)a2 completion:(id /* block */)a3;
- (void)selfKeyPackageWithUniqueClientIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setupXPCConnectionWithClient:(id)a0 uniqueClientIdentifier:(id)a1 selfMember:(id)a2 processCommitOnServerAck:(BOOL)a3 completion:(id /* block */)a4;
- (void)updateWithUniqueClientIdentifier:(id)a0 groupDetails:(id)a1 forGroup:(id)a2 completion:(id /* block */)a3;

@end
