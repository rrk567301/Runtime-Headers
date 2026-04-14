@class NSXPCListenerEndpoint;

@interface CoreAudioOrchestration.MicActivityServiceDelegate : _TtCs12_SwiftObject <MicActivityClientProtocol>

- (void)disableMicrophoneActivityDetection:(void (^)(int))a0;
- (void)enableMicrophoneActivityDetection:(void (^)(int))a0;
- (void)listenForMicrophoneActivity:(NSXPCListenerEndpoint *)a0 reply:(void (^)(int))a1;
- (void)stopListeningForMicrophoneActivity:(void (^)(int))a0;

@end
