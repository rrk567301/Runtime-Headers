@class NSXPCListener, NSString, NSXPCConnection;
@protocol AUMessageChannel;

@interface AURemoteMessageChannel : NSObject <NSXPCListenerDelegate, AUAudioUnitMessageChannelProtocol> {
    id<AUMessageChannel> _messageChannel;
    NSXPCListener *_listener;
    NSXPCConnection *_xpcConnection;
    AURemoteMessageChannel *_selfRetained;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)endpoint;
- (id)initWithMessageChannel:(id)a0;
- (void)onCallRemoteAU:(id)a0 reply:(id /* block */)a1;
- (void)releaseChannel;
- (void)retainSelfIfRequired;

@end
