@class AVAudioSessionManager, AVAudioHardwareSystem;

@interface AVAudioSessionCallbackDispatcher : NSObject <SessionManagerXPCServerCallbackProtocol> {
    AVAudioSessionManager *mSessionManager;
    AVAudioHardwareSystem *mHardwareSystem;
}

- (void)sessionNeedsStateSync:(unsigned int)a0;
- (void)pingClient:(unsigned int)a0;
- (void)serverDefaultRouteChange:(id)a0;
- (id)initWithSessionManager:(id)a0 hardwareSystem:(id)a1;
- (void)controlValueChanged:(id)a0;
- (void)sessionStoppedForAppStateChange:(unsigned int)a0;
- (void)session:(unsigned int)a0 hasProxies:(BOOL)a1;
- (void).cxx_destruct;
- (void)serverConfigurationChange:(id)a0;
- (void)processEvents:(id)a0 sessionID:(unsigned int)a1 isDecoupledInput:(BOOL)a2;
- (void)interruptionMessageForSession:(unsigned int)a0 userInfo:(id)a1;

@end
