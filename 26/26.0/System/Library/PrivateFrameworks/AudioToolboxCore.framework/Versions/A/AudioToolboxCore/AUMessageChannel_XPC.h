@class NSXPCConnection;

@interface AUMessageChannel_XPC : NSObject <AUMessageChannel> {
    NSXPCConnection *_xpcConnection;
}

@property (copy) id /* block */ callHostBlock;

- (void)dealloc;
- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)callAudioUnit:(id)a0;

@end
