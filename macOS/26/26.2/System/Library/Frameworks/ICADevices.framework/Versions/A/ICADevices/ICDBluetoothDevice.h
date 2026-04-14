@class NSString, NSMutableDictionary;

@interface ICDBluetoothDevice : ICDDevice {
    NSMutableDictionary *_params;
}

@property (readonly) NSString *bluetoothAddress;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (short)openDevice;
- (void)updateDeviceDictionary:(id)a0;

@end
