@class CBCentralManager, NSString, NSObject, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate, AXHADeviceControllerProtocol> {
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    BOOL _isScanning;
    BOOL _isResetting;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXDispatchTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXDispatchTimer *_availableDeviceTimer;
}

@property (retain, nonatomic) NSMutableArray *availablePeripherals;
@property (retain) NSMutableArray *loadedDevices;
@property (retain, nonatomic) NSMutableArray *connectedDevices;
@property (retain, nonatomic) NSMutableArray *persistentDevices;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (retain, nonatomic) NSMutableArray *centralRequestBlocks;
@property (retain, nonatomic) NSMutableArray *availableSearchBlocks;
@property (retain, nonatomic) NSMutableArray *connectedSearchBlocks;
@property (nonatomic) BOOL shouldActiveScan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (BOOL)isScanning;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)centralManager:(id)a0 didRetrieveConnectedPeripherals:(id)a1;
- (void)stopSearching;
- (void)updateProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (void)writeValue:(id)a0 forProperty:(unsigned long long)a1 forDeviceID:(id)a2;
- (BOOL)isPartiallyConnected;
- (id)valueForProperty:(unsigned long long)a0 forDeviceID:(id)a1;
- (id)hearingAidForDeviceID:(id)a0;
- (void)device:(id)a0 didUpdateProperty:(unsigned long long)a1;
- (void)cancelPendingConnections;
- (void)registerForPropertyUpdates:(id /* block */)a0;
- (void)stopPropertyUpdates;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)a0;
- (BOOL)isPartiallyPaired;
- (void)forgetDevice:(id)a0;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)a0;
- (id)hearingAidsForUUID:(id)a0;
- (void)searchForAvailableDevices;
- (void)pairedHearingAidsDidChange;
- (void)removeLoadedDevice:(id)a0;
- (void)clearMissingHearingAids;
- (void)sendRequestToCentralManager:(id /* block */)a0;
- (void)loadedDevicesDidChange;
- (void)disconnectFromPeripheral:(id)a0;
- (id)hearingAidForPeripheral:(id)a0;
- (void)addLoadedDevice:(id)a0;
- (void)addAvailableDevice:(id)a0;
- (void)addConnectedDevice:(id)a0;
- (void)removeAvailableDevice:(id)a0;
- (void)removeConnectedDevice:(id)a0;
- (BOOL)isBluetoothAvailable;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (void)connectToPeripheral:(id)a0;
- (id)hearingAidsForPeripheral:(id)a0;
- (void)deviceDidFinishLoading:(id)a0;
- (void)searchForConnectedDevices;
- (void)resetConnectionToPeripheral:(id)a0;
- (void)mergeDevice:(id)a0 withDevice:(id)a1;
- (BOOL)peripheralIsPaired:(id)a0;
- (void)unpairPeripheralWithUUID:(id)a0;

@end
