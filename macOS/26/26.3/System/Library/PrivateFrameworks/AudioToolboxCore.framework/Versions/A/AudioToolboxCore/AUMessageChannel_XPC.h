@class NSXPCConnection;

@interface AUMessageChannel_XPC : NSObject <AUMessageChannel> {
    NSXPCConnection *_xpcConnection;
}

@property (copy) id /* block */ callHostBlock;

- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)callAudioUnit:(id)a0;

@end
