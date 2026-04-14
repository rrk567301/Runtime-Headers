@class CBCentralManager, NSString, CBPeripheral, BluetoothDevice, NSObject, BluetoothManager;
@protocol OS_dispatch_queue;

@interface HMAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BluetoothManager *_bluetoothManager;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _isCentralManagerOn;
    BluetoothDevice *_selectedDevice;
    CBPeripheral *_selectedPeripheral;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
