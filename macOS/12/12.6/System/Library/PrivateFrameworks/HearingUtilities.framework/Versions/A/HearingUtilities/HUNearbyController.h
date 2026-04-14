@class AXRemoteHearingAidDevice, AXDispatchTimer, NSArray, IDSService, NSString, RPCompanionLinkClient, NSObject, SFDeviceDiscovery;
@protocol OS_dispatch_queue, HUNearbyControllerDelegate;

@interface HUNearbyController : HUDeviceController <IDSServiceDelegate, HUNearbyDeviceDelegate>

@property (copy, nonatomic) NSArray *availableDevices;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) RPCompanionLinkClient *client;
@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue;
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer;
@property (nonatomic) BOOL holdingMediaForConnection;
@property (nonatomic) BOOL holdingPhoneForConnection;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<HUNearbyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)updateState;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)mediaServerDied;
- (void)sendMessage:(id)a0 toDevices:(id)a1;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (id)hearingAidForDeviceID:(id)a0;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (BOOL)representsLocalDevices;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (void)sendWriteToAllDevices:(id)a0;
- (void)checkConnectionToHearingDevice:(id /* block */)a0;
- (void)checkConnectionPeers:(id /* block */)a0;
- (void)requestHandoffForMedia;
- (void)sendMessageToAllDevices:(id)a0;
- (void)unregisterMediaNotifications;
- (void)registerMediaNotifications;
- (BOOL)hasConnectionToHearingDevice;
- (void)sendConnectionToCompanionIfPossible:(BOOL)a0;
- (void)getConnectedPeer:(id /* block */)a0;
- (void)updateStateOnDeviceQueue;
- (id)connectedPeer;
- (id)nearbyDeviceWithIdentifier:(id)a0;
- (id)nearbyDeviceWithPeerDevice:(id)a0;
- (id)deviceWithIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (unsigned long long)currentConnectionStatus;
- (void)relinquishConnectionForReason:(long long)a0;
- (void)sendConnectionUpdateToPeers;
- (void)sendConnectionToCompanionIfPossible;
- (void)sendWrite:(id)a0 toDevices:(id)a1;
- (id)addDeviceWithIdentifier:(id)a0;
- (id)hearingDevice;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2 toDevices:(id)a3;
- (void)shouldRequestAudioConnectionForCall:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)routesDidChange:(id)a0;
- (void)callStatusDidChange:(id)a0;
- (void)mediaPlaybackDidChange:(id)a0;
- (void)requestConnectionForReason:(long long)a0;
- (void)checkPairedPeerExists:(id /* block */)a0;

@end
