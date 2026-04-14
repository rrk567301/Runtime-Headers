@protocol _VZIOHIDEventSender;

@interface _VZHIDDevice : NSObject {
    id<_VZIOHIDEventSender> _eventSender;
    unsigned long long _hidDeviceIndex;
}

- (void).cxx_destruct;
- (void)sendIOHIDEvents:(id)a0;

@end
