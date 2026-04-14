@class _GCBluetoothDeviceIdentifier, NSObject;
@protocol OS_dispatch_queue;

@interface _GCBluetoothDeviceDisconnectionRequest : NSObject {
    _GCBluetoothDeviceIdentifier *_deviceIdentifier;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)performRequest:(id /* block */)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
