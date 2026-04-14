@class CBDevice;

@interface HeadphoneManager.AudioAccessoryContainerDevice : AudioAccessoryDevice {
    void /* unknown type, empty encoding */ _cbDevice;
}

@property (nonatomic, readonly) CBDevice *coreBluetoothDevice;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
