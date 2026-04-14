@class CBDevice;

@interface HeadphoneManager.AudioAccessoryContainerDevice : AudioAccessoryDevice {
    void /* unknown type, empty encoding */ _cbDevice;
}

@property (nonatomic, readonly) CBDevice *coreBluetoothDevice;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
