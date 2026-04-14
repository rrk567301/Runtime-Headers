@class NSMutableSet;

@interface MTDClientInterface : IsolatedCoreAudioClientNSXPCListenerDelegate <MicActivityClientProtocol>

@property (retain, nonatomic) NSMutableSet *reverseConnections;

- (id)init;
- (void).cxx_destruct;
- (void)disable_microphone_activity_detection_with_reply:(id /* block */)a0;
- (void)enable_microphone_activity_detection_with_reply:(id /* block */)a0;
- (void)listen_for_microphone_activity:(id)a0 reply:(id /* block */)a1;
- (void)register_client:(id)a0 reply:(id /* block */)a1;
- (void)stop_listening_for_microphone_activity_with_reply:(id /* block */)a0;

@end
