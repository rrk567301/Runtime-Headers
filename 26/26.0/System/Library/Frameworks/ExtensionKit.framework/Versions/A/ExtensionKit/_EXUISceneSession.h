@class NSXPCListenerEndpoint, NSViewController, NSString, _EXPromise, _EXExtension, _EXExtensionRootViewController;

@interface _EXUISceneSession : _EXSceneSession <NSXPCListenerDelegate>

@property (retain) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain) _EXPromise *initializationPromise;
@property (readonly, weak, nonatomic) _EXExtension *extension;
@property (retain, nonatomic) _EXExtensionRootViewController *rootViewController;
@property (retain, nonatomic) NSViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeSceneWithError:(id *)a0;
- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (void)connectToScene:(id)a0;
- (id)makeConfigurationWithParameters:(id)a0;
- (id)makeConnectionResponse;
- (id)viewBridgeEndpoint;

@end
