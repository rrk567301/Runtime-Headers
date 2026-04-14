@class NSHashTable, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CSBluetoothManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct BTSessionImpl { } *bluetoothSession;
@property (nonatomic) BOOL isAttachingBluetoothSession;
@property (nonatomic) struct BTLocalDeviceImpl { } *localDevice;
@property (retain, nonatomic) NSArray *pairedDeviceAddresses;
@property (retain, nonatomic) NSArray *connectedDeviceAddresses;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *bluetoothSessionSetupGroup;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_attachBluetoothSession;
- (id)_getWirelessSplitterInfoFromLocalDevice:(struct BTLocalDeviceImpl { } *)a0;
- (void)getBTLocalDeviceWithCompletion:(id /* block */)a0;
- (void)_tearDownLocalDevice;
- (void)_detachBluetoothSession;
- (void)_setUpLocalDevice;
- (void)getWirelessSplitterInfoWithCompletion:(id /* block */)a0;
- (void)device:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 serviceEventType:(int)a2 serviceSpecificEvent:(unsigned int)a3 result:(int)a4;
- (void)_sessionAttached:(struct BTSessionImpl { } *)a0 result:(int)a1;
- (void)_sessionDetached:(struct BTSessionImpl { } *)a0;
- (void)_sessionTerminated:(struct BTSessionImpl { } *)a0;
- (void)localDevice:(struct BTLocalDeviceImpl { } *)a0 event:(int)a1 result:(int)a2;

@end
