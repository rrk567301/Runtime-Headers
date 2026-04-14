@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SLDisplayPresetDeviceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _deviceEventBlock;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _publishedNotifier;
    unsigned int _terminatedNotifier;
    struct WSMainThreadBlockHoist { } *_mainThreadHoist;
    NSMutableArray *_devices;
    NSMutableDictionary *_devicesByContainerId;
    NSMutableDictionary *_devicesByService;
    unsigned int _pmAssertionID;
}

+ (id)instance;
+ (void)setDebugDeferArrivalSeconds:(float)a0;
+ (float)debugDeferArrivalSeconds;

- (void)dealloc;
- (id)init;
- (void)stop;
- (void)startWithBlock:(id /* block */)a0 onQueue:(id)a1;
- (id)copyDeviceForContainer:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0;
- (void)_serviceAdded:(unsigned int)a0;
- (void)_serviceRemoved:(unsigned int)a0;
- (id)copyDevices;
- (void)tickleTemporaryPowerAssertion:(id)a0;

@end
