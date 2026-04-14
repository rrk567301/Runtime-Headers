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
+ (void)_onAppKitThreadRequestViewController:(id /* block */)a0 withBlock:(id /* block */)a1;
+ (void)_requestViewController:(id /* block */)a0 withBlock:(id /* block */)a1;
+ (void)deferBlockOntoMainThread:(id /* block */)a0;
+ (BOOL)inhibitFirstResponder;
+ (BOOL)remoteViewShouldHaveAccessibilityChildren:(id)a0;
+ (void)requestViewController:(id)a0 connectionHandler:(id /* block */)a1;
+ (void)requestViewController:(id)a0 fromServiceListenerEndpoint:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestViewController:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestViewController:(id)a0 withServiceViewControllerIdentifier:(id)a1 forRemoteView:(id)a2 connectionHandler:(id /* block */)a3;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 connectionHandler:(id /* block */)a2;
+ (void)requestViewControllerForExtensionWithIdentifier:(id)a0 fromServiceWithBundleIdentifier:(id)a1 serviceInstanceIdentifier:(id)a2 connectionHandler:(id /* block */)a3;
+ (BOOL)shouldLayerBackRemoteView:(id)a0;
+ (id)unflattenEvent:(id)a0 owner:(unsigned int)a1 window:(id)a2;
+ (BOOL)viewShouldDragOldestAncestorWindow;

- (void)disconnect;
- (id)exportedInterface;
- (id)exportedObject;
- (void)dealloc;
- (void)setView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)retain;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)serviceViewControllerInterface;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)synchronizeAnimationsInActions:(id /* block */)a0;
- (void)__vbSuperRelease;
- (void)_initAux;
- (void)_postServiceViewReceivedLeftMouseDownNotification:(long long)a0;
- (void)_viewDidMoveToSuperview;
- (id)_viewWithoutLoad;
- (void)aboutToAdvanceView:(id)a0 toRunPhaseWithParameters:(id)a1;
- (double)fauxSynchronousIPCPatience;
- (BOOL)inhibitFirstResponder;
- (BOOL)remoteViewShouldHaveAccessibilityChildren:(id)a0;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;
- (void)serviceBuiltForPlatform:(unsigned int)a0 againstMinimumSDK:(unsigned int)a1 reply:(id /* block */)a2;
- (void)setInhibitFirstResponder:(BOOL)a0;
- (void)setServiceBundleIdentifier:(id)a0;
- (void)setServiceListenerEndpoint:(id)a0;
- (void)setServiceViewControllerClassName:(id)a0;
- (BOOL)shouldContributeToKeyboardEventGraph;
- (BOOL)shouldLayerBackRemoteView:(id)a0;
- (BOOL)viewShouldDragOldestAncestorWindow;

@end
