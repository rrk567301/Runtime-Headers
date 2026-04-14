@class NSArray, NSMutableDictionary, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSBluetoothManager : NSObject <CSFirstUnlockMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct BTSessionImpl { } *bluetoothSession;
@property (nonatomic) BOOL isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl { } *localDevice;
@property (retain, nonatomic) NSArray *pairedDeviceAddresses;
@property (retain, nonatomic) NSArray *connectedDeviceAddresses;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;
@property (nonatomic) struct BTAccessoryManagerImpl { } *accessoryManager;
@property (retain, nonatomic) NSMutableDictionary *deviceAddressToDeviceInfoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_sessionTerminated:(struct BTSessionImpl { } *)a0;
- (id)getBluetoothDeviceInfoForDeviceWithId:(id)a0;
- (void)device:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 serviceEventType:(int)a2 serviceSpecificEvent:(unsigned int)a3 result:(int)a4;
- (id)_getConnectedBluetoothDeviceAddressesFromLocalDevice:(struct BTLocalDeviceImpl { } *)a0;
- (void)_setUpAccessoryManager;
- (id)init;
- (void)localDevice:(struct BTLocalDeviceImpl { } *)a0 event:(int)a1 result:(int)a2;
- (void)getConnectedBluetoothDeviceAddressesWithCompletion:(id /* block */)a0;
- (void)_loadAACPCapabilityForDevice:(struct BTDeviceImpl { } *)a0 deviceAddress:(id)a1;
- (void)_sessionAttached:(struct BTSessionImpl { } *)a0 result:(int)a1;
- (id)_getAddressWithBTDevice:(struct BTDeviceImpl { } *)a0;
- (void)_sessionDetached:(struct BTSessionImpl { } *)a0;
- (void)_tearDownAccessoryManager;
- (void)getBTDeviceInfoWithBTAddressString:(id)a0 withCompletion:(id /* block */)a1;
- (id)_getBluetoothDeviceInfoForDeviceWithBTAddressString:(id)a0;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl { } *)a0;
- (void)_detachBluetoothSession;
- (void).cxx_destruct;
- (void)_tearDownLocalDevice;
- (void)accessoryManager:(struct BTAccessoryManagerImpl { } *)a0 accessoryEvent:(int)a1 device:(struct BTDeviceImpl { } *)a2 accessoryState:(int)a3;
- (void)CSFirstUnlockMonitor:(id)a0 didReceiveFirstUnlock:(BOOL)a1;
- (id)_setBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { } *)a0;
- (void)_fetchAllConnectedDevices;
- (void)_setUpLocalDevice;
- (void)_attachBluetoothSession;
- (void)getWirelessSplitterInfoWithCompletion:(id /* block */)a0;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)a0;
- (void)_clearBluetoothDeviceInfoForDevice:(struct BTDeviceImpl { } *)a0;

@end
