@interface IMSPICollaborationMessageListener : NSObject <IMDaemonListenerCollaborationProtocol> {
    void /* unknown type, empty encoding */ listenerID;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void)stopListening;
- (void)startListening;
- (id)init;
- (void).cxx_destruct;
- (void)didReceiveCollaborationMessage:(id)a0 inChat:(id)a1 style:(unsigned char)a2 account:(id)a3;
- (id)initWithListenerID:(id)a0;

@end
