@interface MediaContinuityKit.CoexSessionXPCServerProxy : NSObject <MediaContinuityKit.CoexSessionProtocol, MediaContinuityKit.CoexSessionDelegateProtocol> {
    void /* unknown type, empty encoding */ processIdentifier;
    void /* unknown type, empty encoding */ coexManager;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ daemonTransaction;
    void /* unknown type, empty encoding */ coexSession;
}

- (id)init;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)resumeSessionWithCompletionHandler:(id /* block */)a0;
- (void)startSuspendedWithUuid:(id)a0 config:(id)a1 completionHandler:(id /* block */)a2;
- (void)startWithUuid:(id)a0 config:(id)a1 completionHandler:(id /* block */)a2;
- (void)suspendSessionWithCompletionHandler:(id /* block */)a0;

@end
