@interface _TtC11AskToDaemonP33_D5D2E3A5CDD8E512D4F6A05865E285B023AskToIDSServiceDelegate : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ pendingSendCompletions;
    void /* unknown type, empty encoding */ relay;
}

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;

@end
