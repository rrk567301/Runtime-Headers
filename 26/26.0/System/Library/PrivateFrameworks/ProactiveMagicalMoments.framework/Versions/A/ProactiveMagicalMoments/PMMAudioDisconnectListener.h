@interface PMMAudioDisconnectListener : NSObject {
    id /* block */ _disconnectHandler;
}

+ (BOOL)bluetoothDeviceTypeIsAudio:(id)a0;

- (void)_setupAudioDisconnectListener;
- (id)initWithHandler:(id /* block */)a0;
- (void)_setupBluetoothDisconnectListener;
- (void).cxx_destruct;

@end
