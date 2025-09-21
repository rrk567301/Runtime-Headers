@class CBCentralManager, NSString, NSHashTable, CBClassicManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IOBluetoothCoreBluetoothCoordinator : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate, CBPairingAgentDelegate, CBCentralManagerDelegate>

@property BOOL isDiscoverable;
@property int _currentPowerState;
@property (retain, nonatomic) CBClassicManager *classicManager;
@property (retain) NSHashTable *delegates;
@property (nonatomic) unsigned char bluetoothPageScanEnableState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *powerStateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *powerStateCallbackQueue;
@property (retain, nonatomic) NSMutableArray *powerStateCompletionBlocks;
@property (retain, nonatomic) NSMutableArray *notifyPowerStateCompletionBlocks;
@property (readonly) int bluetoothPowerState;
@property (readonly) BOOL inquiryState;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (readonly) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isPeerPaired:(id)a0;
- (BOOL)getCBPrivacySupported;
- (void)addDelegate:(id)a0;
- (BOOL)isPeerCloudPaired:(id)a0;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (void)stopScanning;
- (void)startScanning:(BOOL)a0;
- (BOOL)isPeerMagicPaired:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)pairingAgent:(id)a0 peerDidRequestPairing:(id)a1 type:(long long)a2 passkey:(id)a3;
- (id)init;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)connectedDevices;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)connectPeer:(id)a0 options:(id)a1;
- (void)unpairPeer:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)cancelPeerConnection:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void).cxx_destruct;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (id)pairedDevices;
- (unsigned int)minorDeviceClassForClassicPeer:(id)a0;
- (void)_updatePowerState;
- (BOOL)getTCCApprovalStatus;
- (BOOL)isDeviceDiscoverable;
- (BOOL)isPeerDOAPSupported:(id)a0;
- (void)pairPeer:(id)a0 forType:(long long)a1 withKey:(id)a2;
- (id)peerForAddressString:(id)a0;
- (id)peerForIdentifier:(id)a0;
- (void)updateBTPowerStateTo:(BOOL)a0;
- (void)updateConnectableState:(BOOL)a0;
- (void)updateDiscoverableState:(BOOL)a0;
- (void)userNotificationReadyAlert:(id)a0;

@end
