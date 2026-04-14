@class NSXPCListenerEndpoint, NSXPCListener, NSString, _EXExtensionRootViewController, _EXRunningUIExtension, _EXExtensionViewController;

@interface EXExtensionUISession : EXUISession <NSXPCListenerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak) _EXRunningUIExtension *extension;
@property BOOL connectionAccepted;
@property (retain) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain) NSXPCListener *listener;
@property (retain) _EXExtensionRootViewController *viewController;
@property (readonly) _EXExtensionViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)suspend;
- (id)viewBridgeEndpoint;
- (id)makeExtensionViewController;
- (id)initWithIdentifier:(id)a0 extension:(id)a1 sceneIdentifier:(id)a2;

@end
