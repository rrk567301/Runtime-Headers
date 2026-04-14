@class NSObject, NSString, NSMutableDictionary, NSMutableArray, AXHearingSlaveController;
@protocol OS_dispatch_queue, AXIDCManagerSecurityDelegate;

@interface AXHAControllerBrowser : AXIDCManager <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate, AXHADeviceControllerProtocol> {
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
}

@property (retain, nonatomic) AXHearingSlaveController *slaveController;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 forDeviceID:(id)a2;
- (void)resolveMasterWithCompletion:(id /* block */)a0;
- (void)controller:(id)a0 didCloseConnectionWithError:(id)a1;
- (void)controller:(id)a0 didFinishSendingData:(id)a1;
- (void)controller:(id)a0 didReceiveData:(id)a1;
- (void)controllerDidFinishConnecting:(id)a0;
- (void)logWifiName;
- (void)becomeMaster;
- (BOOL)shouldBecomeMaster;
- (void)repairSplitConnection;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 forControllers:(id)a2;
- (void)device:(id)a0 didUpdateProperty:(unsigned long long)a1;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (void)writePayload:(id)a0 toControllers:(id)a1;
- (void)registerForPropertyUpdates:(id /* block */)a0;
- (void)stopPropertyUpdates;

@end
