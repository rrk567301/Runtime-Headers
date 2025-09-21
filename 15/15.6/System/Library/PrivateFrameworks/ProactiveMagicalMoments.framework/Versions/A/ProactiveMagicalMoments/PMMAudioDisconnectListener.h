@interface PMMAudioDisconnectListener : NSObject {
    id /* block */ _disconnectHandler;
}

+ (char)bluetoothDeviceTypeIsAudio:(id)a0;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)_setupAudioDisconnectListener;
- (void)_setupBluetoothDisconnectListener;

@end
