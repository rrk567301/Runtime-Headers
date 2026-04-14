@interface AVAudioIONodeCallbackDispatcher : NSObject <IONodeSessionXPCServerCallbackProtocol, SessionManagerXPCServerCallbackProtocol>

- (void)sessionNeedsStateSync:(unsigned int)a0;
- (void)pingClient:(unsigned int)a0;
- (void)serverDefaultRouteChange:(id)a0;
- (void)controlValueChanged:(id)a0;
- (void)sessionStoppedForAppStateChange:(unsigned int)a0;
- (void)session:(unsigned int)a0 hasProxies:(BOOL)a1;
- (void)serverConfigurationChange:(id)a0;
- (void)processEvents:(id)a0 sessionID:(unsigned int)a1 isDecoupledInput:(BOOL)a2;
- (void)interruptionMessageForSession:(unsigned int)a0 userInfo:(id)a1;

@end
