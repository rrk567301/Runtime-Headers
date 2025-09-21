@class NSXPCConnection;
@protocol MicActivityClientProtocol;

@interface MicActivityDXPCConnection : NSObject <MicActivityClientProtocol> {
    NSXPCConnection *connection;
    id<MicActivityClientProtocol> server;
}

- (id)init;
- (void).cxx_destruct;
- (void)disableMicrophoneActivityDetection:(id /* block */)a0;
- (void)enableMicrophoneActivityDetection:(id /* block */)a0;
- (void)listenForMicrophoneActivity:(id)a0 reply:(id /* block */)a1;
- (void)stopListeningForMicrophoneActivity:(id /* block */)a0;

@end
