@class HCXPCMessage, NSString, NSDictionary, NSObject;
@protocol OS_os_transaction;

@interface AXHAController : NSObject {
    BOOL _isListening;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)willSwitchUser;
- (id)connectToControllerWithID:(id)a0;
- (void)availableRemoteControllersDidChange;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (void)setPairedHearingAid:(id)a0;
- (BOOL)hearingAidsPaired;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (id)writeDeviceProperty:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readAvailableControllers:(id)a0;
- (id)disconnectAndForceSlave:(id)a0;
- (void)updateNearbyDeviceAvailability;
- (void)transitionToPeer;
- (id)disconnectAndForceClient:(id)a0;
- (id)registerForControlMessageUpdates:(id)a0;

@end
