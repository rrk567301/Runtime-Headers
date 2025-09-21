@class NSString, NSXPCConnection;
@protocol PUEditingExtensionUndoTarget;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<PUEditingExtensionUndoTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)remoteObject;
- (void)performRedo;
- (void)performUndo;
- (void)setShowUndoRedo:(char)a0;
- (void)setUndoEnabled:(char)a0 redoEnabled:(char)a1;

@end
