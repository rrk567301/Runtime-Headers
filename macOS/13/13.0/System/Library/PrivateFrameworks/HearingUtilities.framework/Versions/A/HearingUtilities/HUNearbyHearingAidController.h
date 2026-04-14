@class NSObject, AXDispatchTimer, AXRemoteHearingAidDevice;
@protocol OS_dispatch_queue, HUNearbyHearingAidControllerDelegate;

@interface HUNearbyHearingAidController : HUDeviceController

@property (retain, nonatomic) AXRemoteHearingAidDevice *localDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaQueue;
@property (retain, nonatomic) AXDispatchTimer *sendConnectionToCompanionTimer;
@property (nonatomic) BOOL holdingMediaForConnection;
@property (nonatomic) BOOL holdingPhoneForConnection;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<HUNearbyHearingAidControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)updateState;
- (id)availableDevices;
- (void)mediaServerDied;
- (void)sendMessage:(id)a0 toDevices:(id)a1;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2;
- (id)hearingAidForDeviceID:(id)a0;
- (BOOL)representsLocalDevices;
- (void)registerMediaNotifications;
- (void)unregisterMediaNotifications;
- (void)shouldRequestAudioConnectionForCall:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)routesDidChange:(id)a0;
- (void)callStatusDidChange:(id)a0;
- (void)mediaPlaybackDidChange:(id)a0;
- (void)requestHandoffForMedia;
- (void)sendConnectionToCompanionIfPossible;
- (void)sendConnectionToCompanionIfPossible:(BOOL)a0;
- (void)requestConnectionForReason:(long long)a0;
- (void)checkPairedPeerExists:(id /* block */)a0;
- (BOOL)shouldRelinquishConnectionForReason:(long long)a0;
- (void)relinquishConnectionForReason:(long long)a0;
- (void)updateStateOnDeviceQueue;
- (void)getConnectedPeer:(id /* block */)a0;
- (id)connectedPeer;
- (id)hearingDevice;
- (void)checkConnectionPeers:(id /* block */)a0;
- (void)checkConnectionToHearingDevice:(id /* block */)a0;
- (BOOL)hasConnectionToHearingDevice;
- (void)sendConnectionUpdateToPeers;
- (void)sendMessageToAllDevices:(id)a0;
- (void)sendWriteToAllDevices:(id)a0;
- (void)sendWrite:(id)a0 toDevices:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 andDeviceID:(id)a2 toDevices:(id)a3;
- (id)device:(id)a0 didReceiveMessage:(id)a1;

@end
