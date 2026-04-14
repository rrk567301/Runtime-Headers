@class NSXPCListenerEndpoint, NSString, NSUUID, NSRemoteViewControllerAuxiliary;

@interface NSRemoteViewController : NSViewController {
    NSRemoteViewControllerAuxiliary *_aux;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

@property (readonly) NSString *remoteViewIdentifier;
@property (readonly) NSString *serviceBundleIdentifier;
@property (readonly) NSUUID *serviceInstanceIdentifier;
@property (readonly) NSString *serviceViewControllerClassName;
@property (readonly) NSXPCListenerEndpoint *serviceListenerEndpoint;
@property (readonly) int serviceProcessIdentifier;
@property (readonly) struct { unsigned int x0[8]; } serviceAuditToken;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldLayerBackRemoteView:(id)a0;
+ (BOOL)inhibitFirstResponder;
+ (BOOL)remoteViewShouldHaveAccessibilityChildren:(id)a0;
+ (BOOL)viewShouldDragOldestAncestorWindow;
+ (void)_onAppKitThreadRequestViewController:(id /* block */)a0 withBlock:(id /* block */)a1;
+ (void)_requestViewController:(id /* block */)a0 withBlock:(id /* block */)a1;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 serviceInstanceIdentifier:(id)a2 connectionHandler:(id /* block */)a3;
+ (void)requestViewController:(id)a0 connectionHandler:(id /* block */)a1;
+ (void)requestViewController:(id)a0 withServiceViewControllerIdentifier:(id)a1 forRemoteView:(id)a2 connectionHandler:(id /* block */)a3;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestViewController:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestViewController:(id)a0 fromServiceListenerEndpoint:(id)a1 connectionHandler:(id /* block */)a2;
+ (id)unflattenEvent:(id)a0 owner:(unsigned int)a1 window:(id)a2;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)disconnect;
- (id)exportedObject;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerInterface;
- (id)serviceViewControllerProxyWithErrorHandler:(id /* block */)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (void)setServiceViewControllerClassName:(id)a0;
- (void)synchronizeAnimationsInActions:(id /* block */)a0;
- (double)fauxSynchronousIPCPatience;
- (void)_viewDidMoveToSuperview;
- (BOOL)shouldLayerBackRemoteView:(id)a0;
- (BOOL)inhibitFirstResponder;
- (void)setServiceListenerEndpoint:(id)a0;
- (BOOL)remoteViewShouldHaveAccessibilityChildren:(id)a0;
- (id)_viewWithoutLoad;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)viewShouldDragOldestAncestorWindow;
- (void)_initAux;
- (void)setServiceBundleIdentifier:(id)a0;
- (void)serviceBuiltForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setInhibitFirstResponder:(BOOL)a0;

@end
