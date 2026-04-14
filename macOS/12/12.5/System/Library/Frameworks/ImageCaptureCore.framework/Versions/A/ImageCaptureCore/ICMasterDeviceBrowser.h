@class ICCommandCenter, NSMutableDictionary, NSMutableArray;

@interface ICMasterDeviceBrowser : NSObject {
    ICCommandCenter *_commandCenter;
    long long _numberOfBrowsingBrowsers;
    long long _numberOfBrowsersOfSharedDevice;
    long long _numberOfBrowsersOfBonjourDevice;
    BOOL _processDevicesInvokedOnce;
}

@property (readonly) NSMutableDictionary *devices;
@property (readonly) NSMutableArray *browsers;

+ (id)defaultBrowser;

- (void)dealloc;
- (id)init;
- (void)stop:(id)a0;
- (void)start:(id)a0;
- (id)deviceWithDeviceID:(id)a0;
- (id)getConnection;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)devicesMatchingDeviceTypeMask:(unsigned long long)a0;
- (void)startBrowsingForSharedDevices;
- (void)stopBrowsingForSharedDevices;
- (void)startBrowsingForBonjourDevices;
- (void)stopBrowsingForBonjourDevices;
- (id)deviceWithDeviceRef:(id)a0;
- (void)handleCommandCompletion:(id)a0;
- (void)informBrowserDelegateUsingSelector:(SEL)a0 withObject:(id)a1;
- (BOOL)sendMessageCmd:(id)a0;
- (void)handleImageCaptureEventNotification:(id)a0;
- (void)icddConnectionSuspend:(id)a0;
- (void)icddConnectionResume:(id)a0;
- (void)handleNetworkDeviceRemoved:(id)a0;
- (void)registerForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)addBrowser:(id)a0;
- (void)unregisterForImageCaptureEventNotifications:(id)a0 reason:(id)a1;
- (void)removeBrowser:(id)a0;
- (void)processDevices:(id)a0;
- (void)helloICDD;
- (void)updateDevice:(id)a0;
- (void)updateDevices:(id)a0 type:(unsigned long long)a1;
- (id)deviceWithDelegate:(id)a0;

@end
