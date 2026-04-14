@class NSXPCConnection;
@protocol MicActivityClientProtocol;

@interface MicActivityDXPCConnection : NSObject <MicActivityClientProtocol> {
    NSXPCConnection *connection;
    id<MicActivityClientProtocol> server;
}

- (id)initWithListenerEndpoint:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)connectToService;
- (void)disableMicrophoneActivityDetection:(id /* block */)a0;
- (void)enableMicrophoneActivityDetection:(id /* block */)a0;
- (void)listenForMicrophoneActivity:(id)a0 reply:(id /* block */)a1;
- (void)stopListeningForMicrophoneActivity:(id /* block */)a0;
- (void)submitReferenceStreamUID:(id)a0 withReply:(id /* block */)a1;

@end
