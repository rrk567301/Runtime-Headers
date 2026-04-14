@class GCIONotificationPort, NSSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _GCRacingWheelManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    GCIONotificationPort *_deviceNotificationPort;
    struct __CFSet { } *_deviceNotificationIterators;
    struct __CFSet { } *_connectedWheelDeviceNotifications;
    NSMutableDictionary *_connectedWheels;
}

@property (readonly, copy) NSSet *racingWheels;
@property (readonly, copy) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
