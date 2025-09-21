@class CBCentralManager, NSString, NSHashTable, CBClassicManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface IOBluetoothCoreBluetoothCoordinator : NSObject <IOBluetoothCoreBluetoothCoordinatorDelegate, CBPairingAgentDelegate, CBCentralManagerDelegate>

@property char isDiscoverable;
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
@property (readonly) char inquiryState;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (readonly) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_semaphore> *tccSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)connectedDevices;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)stopScanning;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (char)isPeerPaired:(id)a0;
- (id)pairedDevices;
- (unsigned int)minorDeviceClassForClassicPeer:(id)a0;
- (void)_updatePowerState;
- (void)cancelPeerConnection:(id)a0;
- (void)connectPeer:(id)a0 options:(id)a1;
- (char)getCBPrivacySupported;
- (char)getTCCApprovalStatus;
- (char)isDeviceDiscoverable;
- (char)isPeerCloudPaired:(id)a0;
- (char)isPeerDOAPSupported:(id)a0;
- (char)isPeerMagicPaired:(id)a0;
- (void)pairPeer:(id)a0 forType:(long long)a1 withKey:(id)a2;
- (void)pairingAgent:(id)a0 peerDidCompletePairing:(id)a1;
- (void)pairingAgent:(id)a0 peerDidFailToCompletePairing:(id)a1 error:(id)a2;
- (void)pairingAgent:(id)a0 peerDidRequestPairing:(id)a1 type:(long long)a2 passkey:(id)a3;
- (void)pairingAgent:(id)a0 peerDidUnpair:(id)a1;
- (id)peerForAddressString:(id)a0;
- (id)peerForIdentifier:(id)a0;
- (void)startScanning:(char)a0;
- (void)unpairPeer:(id)a0;
- (void)updateBTPowerStateTo:(char)a0;
- (void)updateConnectableState:(char)a0;
- (void)updateDiscoverableState:(char)a0;
- (void)userNotificationReadyAlert:(id)a0;

@end
