@class NSString, NSNetServiceBrowser, AXIDCSlaveController, NSMutableArray;
@protocol AXIDCControllerBrowserDelegateProtocol, AXIDCManagerSecurityDelegate;

@interface AXIDCManager : NSObject <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate> {
    Class _slaveClass;
    Class _remoteClass;
}

@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) AXIDCSlaveController *slaveController;
@property (retain, nonatomic) NSNetServiceBrowser *browser;
@property (retain, nonatomic) NSMutableArray *remoteControllers;
@property (weak, nonatomic) id<AXIDCControllerBrowserDelegateProtocol> delegate;
@property (weak, nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserWillSearch:(id)a0;
- (id)initWithServiceType:(id)a0;
- (Class)validateClass:(Class)a0 isKindOfClass:(Class)a1;
- (id)availableControllers;
- (void)resolveMasterWithCompletion:(id /* block */)a0;
- (void)controller:(id)a0 didCloseConnectionWithError:(id)a1;
- (void)controller:(id)a0 didFinishSendingData:(id)a1;
- (void)controller:(id)a0 didReceiveData:(id)a1;
- (void)controllerDidFinishConnecting:(id)a0;
- (id)initWithServiceType:(id)a0 remoteClass:(Class)a1 andSlaveClass:(Class)a2;
- (void)becomeMaster;
- (BOOL)shouldBecomeMaster;
- (void)clearControllers;
- (void)sendObject:(id)a0 toController:(id)a1 withSendCompletion:(id /* block */)a2;
- (id)remoteControllerForHostname:(id)a0;
- (id)availableRemoteControllers;
- (void)sendObject:(id)a0 toAllControllersExcept:(id)a1 withCompletion:(id /* block */)a2;
- (void)transitionToSlaveWithCompletion:(id /* block */)a0;

@end
