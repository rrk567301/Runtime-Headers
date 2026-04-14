@interface PIPAgentProxy : NSObject <PIPAgentProtocol, PIPClientXPCProtocol> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ clients;
}

@property (nonatomic, readonly) int agentProcessIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)agentClosePIP:(unsigned int)a0 completion:(id /* block */)a1;
- (void)agentCreatePIP:(unsigned int)a0 accessibilityToken:(id)a1 completion:(id /* block */)a2;
- (void)agentDragPIP:(unsigned int)a0 eventType:(unsigned int)a1 location:(struct CGPoint { double x0; double x1; })a2 timestamp:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)agentHandshakeWithCompletion:(id /* block */)a0;
- (void)agentRestorePIP:(unsigned int)a0 toScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)agentShowPIP:(unsigned int)a0 fromScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animating:(BOOL)a2 withFence:(id)a3 completion:(id /* block */)a4;
- (void)agentUpdatePIP:(unsigned int)a0 controlStyle:(long long)a1 delegateActions:(unsigned long long)a2 playbackState:(id)a3 preferredMaximumSize:(struct CGSize { double x0; double x1; })a4 preferredMinimumSize:(struct CGSize { double x0; double x1; })a5 aspectRatio:(struct CGSize { double x0; double x1; })a6 completion:(id /* block */)a7;
- (id)client:(unsigned int)a0 error:(id *)a1;
- (void)clientPIP:(unsigned int)a0 action:(long long)a1;
- (void)clientPIP:(unsigned int)a0 setMicrophoneMuted:(BOOL)a1;
- (void)clientPIP:(unsigned int)a0 setPlaying:(BOOL)a1;
- (void)clientPIP:(unsigned int)a0 setWindowContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)clientPIP:(unsigned int)a0 skipInterval:(double)a1;
- (void)clientPIP:(unsigned int)a0 willCloseWithCompletion:(id /* block */)a1;
- (void)registerPIPViewController:(id)a0 withContextId:(unsigned int)a1;
- (void)unregisterPIPViewControllerWithContextId:(unsigned int)a0;

@end
