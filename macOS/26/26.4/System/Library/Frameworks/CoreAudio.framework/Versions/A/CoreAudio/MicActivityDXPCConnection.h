@class NSXPCConnection;
@protocol MicActivityClientProtocol;

@interface MicActivityDXPCConnection : NSObject <MicActivityClientProtocol> {
    NSXPCConnection *connection;
    id<MicActivityClientProtocol> server;
}

- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)connectToService;
- (void)disableMicrophoneActivityDetection:(id /* block */)a0;
- (void)enableMicrophoneActivityDetection:(id /* block */)a0;
- (void)listenForMicrophoneActivity:(id)a0 reply:(id /* block */)a1;
- (void)stopListeningForMicrophoneActivity:(id /* block */)a0;
- (void)submitReferenceStreamUID:(id)a0 withReply:(id /* block */)a1;

@end
