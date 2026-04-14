@class _GCBluetoothDeviceIdentifier, NSObject;
@protocol OS_dispatch_queue;

@interface _GCBluetoothDeviceDisconnectionRequest : NSObject {
    _GCBluetoothDeviceIdentifier *_deviceIdentifier;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)init;
- (void)performRequest:(id /* block */)a0;

@end
