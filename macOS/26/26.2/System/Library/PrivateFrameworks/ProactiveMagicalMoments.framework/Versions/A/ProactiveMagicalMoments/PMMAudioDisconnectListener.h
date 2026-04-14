@interface PMMAudioDisconnectListener : NSObject {
    id /* block */ _disconnectHandler;
}

+ (BOOL)bluetoothDeviceTypeIsAudio:(id)a0;

- (id)initWithHandler:(id /* block */)a0;
- (void)_setupBluetoothDisconnectListener;
- (void)_setupAudioDisconnectListener;
- (void).cxx_destruct;

@end
