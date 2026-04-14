@class CBCentralManager, NSString, NSObject, NSMutableDictionary, AXDispatchTimer, NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : HUDeviceController <CBCentralManagerDelegate, AXHADeviceControllerProtocol> {
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    BOOL _isScanning;
    BOOL _centralIsOn;
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
- (BOOL)isPaired;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (BOOL)isScanning;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)centralManager:(id)a0 didRetrieveConnectedPeripherals:(id)a1;
- (void)stopSearching;
- (void)replaceDevice:(id)a0 withDevice:(id)a1;
- (id)hearingAidForDeviceID:(id)a0;
- (BOOL)representsLocalDevices;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)a0;
- (void)clearMissingHearingAids;
- (void)searchForAvailableDevices;
- (void)searchForConnectedDevices;
- (void)resetConnectionToPeripheral:(id)a0;
- (void)connectToPeripheral:(id)a0;
- (void)disconnectFromPeripheral:(id)a0;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)a0;
- (void)cancelPendingConnections;
- (BOOL)isBluetoothAvailable;
- (void)shouldRelinquishForPartialConnection:(id /* block */)a0;
- (void)checkPartiallyPairedWithCompletion:(id /* block */)a0;
- (BOOL)isPartiallyConnected;
- (id)hearingAidsForUUID:(id)a0;
- (id)hearingAidForPeripheral:(id)a0;
- (id)hearingAidsForPeripheral:(id)a0;
- (void)loadedDevicesDidChange;
- (void)addLoadedDevice:(id)a0;
- (void)removeLoadedDevice:(id)a0;
- (void)clearLoadedDevices;
- (void)addAvailableDevice:(id)a0;
- (void)removeAvailableDevice:(id)a0;
- (void)clearAvailableDevices;
- (void)addConnectedDevice:(id)a0;
- (void)removeConnectedDevice:(id)a0;
- (void)clearConnectedDevices;
- (void)mergeDevice:(id)a0 withDevice:(id)a1;
- (void)deviceDidFinishLoading:(id)a0;
- (void)forgetDevice:(id)a0;
- (void)sendRequestToCentralManager:(id /* block */)a0;
- (void)checkPeripheralPaired:(id)a0 withCompletion:(id /* block */)a1;
- (void)unpairPeripheralWithUUID:(id)a0;
- (void)persistPairedHearingAids;
- (void)pairedHearingAidsDidChange;
- (id)valueForProperty:(unsigned long long)a0 forDeviceID:(id)a1;

@end
