@class NSObject;
@protocol OS_dispatch_queue, AVInputDeviceDiscoverySessionImpl;

@interface AVInputDeviceDiscoverySessionInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVInputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end
