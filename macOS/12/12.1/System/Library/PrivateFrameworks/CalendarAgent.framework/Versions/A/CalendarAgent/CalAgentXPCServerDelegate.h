@interface CalAgentXPCServerDelegate : NSObject <NSXPCStoreServerDelegate> {
    int _recoveryInProcess;
}

- (BOOL)willPerformRecoveryForError:(id)a0 fromContext:(id)a1;
- (void)performRecoveryForError:(id)a0 fromContext:(id)a1;

@end
