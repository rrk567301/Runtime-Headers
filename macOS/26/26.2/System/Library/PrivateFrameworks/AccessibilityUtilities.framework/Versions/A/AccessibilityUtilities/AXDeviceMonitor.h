@class NSMutableSet, NSRunLoop;
@protocol AXDeviceMonitorDelegate;

@interface AXDeviceMonitor : NSObject {
    NSRunLoop *_targetRunLoop;
    struct __IOHIDManager { } *_hidManager;
    unsigned long long _state;
    NSMutableSet *_devices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
}

@property (weak, nonatomic) id<AXDeviceMonitorDelegate> delegate;

+ (id)bluetoothKeyboardDevices;

- (void)begin;
- (void)invalidate;
- (id)_existingDevicesForDevice:(struct __IOHIDDevice { } *)a0;
- (void)didAddDevice:(struct __IOHIDDevice { } *)a0;
- (void)_commonInitWithRunLoop:(id)a0;
- (void)informDelegate;
- (void).cxx_destruct;
- (id)initWithMatchingDictionary:(id)a0 callbackRunLoop:(id)a1;
- (id)initWithMatchingMultiple:(id)a0 callbackRunLoop:(id)a1;
- (id)copyDevices;
- (void)didRemoveDevice:(struct __IOHIDDevice { } *)a0;
- (void)dealloc;

@end
