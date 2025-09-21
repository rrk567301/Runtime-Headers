@class NSSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _GCRacingWheelManager : NSObject <GCDeviceSessionDeviceProvider> {
    NSObject<OS_dispatch_queue> *_sessionQueue;
    struct IONotificationPort { } *_deviceNotificationPort;
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

- (void).cxx_destruct;
- (id)initWithDeviceSessionConfiguration:(id)a0 queue:(id)a1 environment:(id)a2;

@end
