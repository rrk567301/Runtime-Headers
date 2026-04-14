@class NSString, NSDictionary, AXHAXPCMessage;

@interface AXHAController : NSObject <AXIDCControllerBrowserDelegateProtocol> {
    BOOL _isListening;
}

@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) AXHAXPCMessage *liveListenMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)willSwitchUser;
- (id)connectToControllerWithID:(id)a0;
- (void)availableRemoteControllersDidChange;
- (void)passConnectionToController:(id)a0 withReason:(long long)a1;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (void)setPairedHearingAid:(id)a0;
- (BOOL)hearingAidsPaired;
- (void)startSearchCycle;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (void)trustChainAvailabilityDidChange:(id)a0;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (id)writeDeviceProperty:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readAvailableControllers:(id)a0;
- (id)disconnectAndForceSlave:(id)a0;

@end
