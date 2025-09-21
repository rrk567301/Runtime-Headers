@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, NSString;
@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoProxyHostSide : NSObject <PUEditingExtensionUndoButtonHost, NSXPCListenerDelegate, PUEditingExtensionUndoTarget>

@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (weak, nonatomic) id<PUEditingExtensionUndoButtonHost> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)remoteObject;
- (void)performRedo;
- (void)performUndo;
- (void)setShowUndoRedo:(char)a0;
- (void)setUndoEnabled:(char)a0 redoEnabled:(char)a1;

@end
